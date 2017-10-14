
//Competetive Contest

#include<bits/stdc++.h>

using namespace std;

//Xor problem
int maxinRange(int L , int R){
    int x=(L^R);
    int a=0;
    while(x){
        a++;
        x>>=1;
    }
    int newNo=0;
    int b=1;
    while(a--){
        newNo+=b;
        b<<=1;
    }
    return newNo;
}


//Birthday Paradox
void BirthdayParadox(float p){

    cout<<"p :" <<p<<endl;

    // no. of persons
    int n=0;
    float c=1;

    float a=365;

    while(c>=(1-p)){
        c=c*((a)/365);
        cout<<c<<endl;
        a--;
        n++;
    }

    cout<<n;
}

//Are they Same
void Split(string s1,string s2){

    string a1=s1.substr(0,s1.length()%2);
    string b1=s2.substr(0,s2.length()%2);
    string a2=s1.substr(s1.length()%2,s1.length()%2);
    string b2=s2.substr(s2.length()%2,s2.length()%2);

    if (a1==b1 && a2==b2){
        cout<<"YES"<<endl;
        return;
    }
    else if (a2==b1 && a1==b2){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}

void AreTheySame(string s1, string s2){

    if (s1.length()!=s2.length()){
        cout<<"NO"<<endl;
        return;
    }
    else{
        if (s1==s2){
            cout<<"YES"<<endl;
            return;
        }
        else{
            if ((s1.length())%2 ==0){
               Split(s1,s2);
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
}

//SubSequences Problem
vector<string> v;
void Subsequences(char a[],char o[],int i,int j){

    if (a[i]=='\0'){
        o[j]='\0';
        string s(o);
        v.push_back(s);
        return;
    }

    //not including
    o[j]='\0';
    Subsequences(a,o,i+1,j);

    //including
    o[j]=a[i];
    Subsequences(a,o,i+1,j+1);
}

//iterative approach
void Subsequences1(char a[],int length){

    int total=pow(2,length);

    for (int i = 0; i < total ; ++i) {
        for (int j = 0; j < length ; ++j) {
            if (i & (1<<j)){
                cout<<a[j];
            }
        }
        cout<<endl;
    }
}

//SEQ recursive approach
void RecursiveApproach(){

}

//Duplicate Parenthesis
void parent(string s){

    stack<char> s1;

    for(char c: s){

        if (c==')'){

            char top=s1.top();
            s1.pop();
            if (top=='('){
                cout<<"Duplicate Found";
                return;
            }
            else {
                while (top != '(') {
                    top = s1.top();
                    s1.pop();
                }
            }
        }
        else{
           s1.push(c);
        }
    }

    if (s1.empty()){
        cout<<"No Duplicates Found ";
    }
}

//Reverse A stack using recursion

void PushToBottom(stack<int> &s,int top){
    if (s.empty()){
        s.push(top);
        return;
    }
    int data = s.top();
    s.pop();
    PushToBottom(s,top);
    s.push(data);

}

void reverse(stack<int> &s){

    if (s.empty()){
        return;
    }

    int top=s.top();
    s.pop();
    reverse(s);
   PushToBottom(s,top);
}

void print(stack<int> s){

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}

//Reverse a Queue(assuming single) using recursion

void rQueue(queue<int> &q){

    if (q.empty()){
        return;
    }
    int top=q.front();
    q.pop();
    rQueue(q);
    q.push(top);
}


void printQ(queue<int> q){

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<" END";
    cout<<endl;
}

//stock span problem
void calculateSpan(int price[], int n, int S[])
{
    stack<int> st;
    st.push(0);
    S[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && price[st.top()] <= price[i])
            st.pop();

        S[i] = (st.empty())? (i + 1) : (i - st.top());
        st.push(i);
    }
}

// A utility function to print elements of array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main(){

    int t;
    cin>>t;

    for (int j = 0; j < t ; ++j) {
        char i[20];
        char a[20];
        cin>>a;
        Subsequences(a,i,0,0);
        sort(v.begin(),v.end());
        for (int k = 0; k < v.size() ; ++k) {
            cout<<v[k]<<endl;
        }
        v.clear();
    }

}