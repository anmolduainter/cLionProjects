#include<bits/stdc++.h>

using namespace std;

int func1(int a,int k,int n){

    int sum=0;
    for (int i = 1; i < n ; ++i) {
        sum+=k;
    }

    return a+sum;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int t;
    cin>>t;

    for (unsigned int i = 0; i < t ; ++i) {
        unsigned int a,k,n;
        cin>>a>>k>>n;
        cout<<func1(a,k,n)<<"\n";
    }

}