#include<bits/stdc++.h>
using namespace std;

int prec(char a){
    if (a=='^'){
        return 3;
    }
    else if (a=='*' || a=='/'){
        return 2;
    }
    else if (a=='+' || a=='-'){
        return 1;
    }
    return -1;
}

void PostFixExpression(string s){

    stack<char> st;
    string out="";
    st.push('N');

    for (int i = 0; i < s.length() ; ++i) {

        if ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
            out+=s[i];
        }

        else if (s[i]=='('){
            st.push(s[i]);
        }

        else if (s[i]==')'){
            while(st.top()!='N' && st.top()!='('){
                out+=st.top();
                st.pop();
            }
            if(st.top() == '(')
            {
              //  char c = st.top();
                st.pop();
            }
        }

        else{
            while(s[i]!='N' && (prec(s[i])<=prec(st.top()))){
                out+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }


    cout<<out<<endl;

}

//Main function
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t ; ++i) {
        string a;
        cin>>a;
        PostFixExpression(a);

    }
}