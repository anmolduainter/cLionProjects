#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

unordered_map<ll,ll > m;
ll factorial(int n){
    if (m.count(n)){
        return m[n];
    }
    else if (n==0){
        return 1;
    }
    return n*factorial(n-1);
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;

    for (ll i = 0; i < t ; ++i) {
        ll a;
        cin>>a;
        cout<<factorial(a)<<"\n";
    }

}