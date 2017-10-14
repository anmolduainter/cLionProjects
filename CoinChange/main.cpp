#include<bits/stdc++.h>

using namespace std;

int CoinChange(int a[],int m,int n){

    if (n==0){
        return 1;
    }

    if (n<0){
        return 0;
    }

    if (m<=0 && n>=1){
        return 0;
    }

    return CoinChange(a,m-1,n)+CoinChange(a,m,n-a[m-1]);

}

int main(){

    int a;
    int b;
    cin>>a;
    cin>>b;

    int in[b];

    for (int i = 0; i < b ; ++i) {
        cin>>in[i];
    }

    cout<<CoinChange(in,b,a);

}