#include<bits/stdc++.h>
using namespace std;


void calcPatternNumb(long long int x,long long int y){

    if (x==y){
        long long int a;
        if(x&1){
            a=(x<<1)-1;
        }
        else{
           a=(x<<1);
        }
        cout<<a<<"\n";
        return;
    }

    else if (x==y+2){
        long long int a;
        if (x&1){
            a=(x+y)-1;
        }
        else{
            a=x+y;
        }
        cout<<a<<"\n";
        return;
    }
    else{
     cout<<"No Number"<<"\n";
    }
}

//Main func
int main(){

    long long int t;
    cin>>t;

    for (long long int i = 0; i < t ; ++i) {
        long long int x,y;
        cin>>x>>y;
        calcPatternNumb(x,y);
    }
}