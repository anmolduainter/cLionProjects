#include<bits/stdc++.h>
using namespace std;

// Score - 23.33/40 points

/*
 * because can do must we what
   wedowhatwemustbecausewecan
 */


vector<string> v;
vector<string> st;

void PasswordCrack(string b){

    //Base Case

    if (b.length()==0){
        for (auto i = st.begin(); i!= st.end() ; ++i) {
            cout<<(*i)<<" ";
        }
        return;
    }

        int m=0,i;
        for (i = 1; i <= b.length(); ++i) {
            if ((find(v.begin(),v.end(),b.substr(0,i)))!=v.end()){
                m=1;
                //cout<<"Found"<<endl;
                st.push_back(b.substr(0,i));
                break;
            }
        }

        if (m==0){
            cout<<"WRONG PASSWORD"<<endl;
            return;
        }

        else{
            b.erase(0,i);
            PasswordCrack(b);
        }


}


int main(){

    int t;
    cin>>t;
    for (int i = 0; i < t ; ++i) {
        int n;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            string a;
            cin>>a;
            v.push_back(a);
        }
        string b;
        cin>>b;
        PasswordCrack(b);
        cout<<endl;
        v.clear();
        st.clear();
    }
    return 0;
}