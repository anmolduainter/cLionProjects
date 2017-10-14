#include <bits/stdc++.h>

using namespace std;

string s1="";

void func(string s,int n,int i){

    if (i>n){
        cout<<s1<<endl;
        s1="";
        return;
    }

    if (s.substr(i,1)=="3" && s.substr(i+1,1)=="." && s.substr(i+2,1)=="1" && s.substr(i+3,1)=="4"){
        s1.append("pi");
        func(s,n,i+4);
    }
    else{
        s1.append(s.substr(i,1));
        func(s,n,i+1);
    }
}

int main(){

    int n;
    cin>>n;

    for (int i = 0; i <=n ;i++) {

        string s;
        getline(cin,s);
        cout<<"Entered String : "<<s<<endl;
        int n1=s.length();
        func(s,n1,0);

    }

}