#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void countTrailingZeroes(ll num){

    ll sum=0;

    while(num>0){
        ll a=(num/5);
        sum+=(a);
        num=a;
    }

    cout<<sum<<endl;

}

int main(){

    ll t;
    cin>>t;

    for (int i = 0; i < t ; ++i) {
        ll a;
        cin>>a;
        countTrailingZeroes(a);
    }

}