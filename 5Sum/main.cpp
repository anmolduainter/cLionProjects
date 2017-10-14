#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    if (b==0){
        return 1;
    }
    int v=power(a,b/2);
    v=v*v;
    if (b&1){
        return a*v;
    }
    return v;
}

void isArmstrong(string s){

    int b=s.length();
    int count=0;

    for (int i = 0; i < s.length() ; ++i) {
        count+=(power(s[i]-'0',b));
       // cout<<count<<endl;
    }

    if (count==stoi(s)){
        cout<<"True";
    }else{
        cout<<"False";
    };
    
}

int main(){

    string n;
    cin>>n;
    isArmstrong(n);
}