#include <bits/stdc++.h>

using namespace std;

const int MAX=1000;

unsigned int f[MAX]={0};

unsigned int fibonacci(unsigned int n){

    if (n==0){
        f[n]=0;
        return f[n];
    }

    if (n==1||n==2){
        f[n]=1;
        return f[n];
    }

    if (f[n]){
        return f[n];
    }

    unsigned int k=(n&1)?((n+1)/2):(n/2);

    return (n&1)?(fibonacci(k)*fibonacci(k)+fibonacci(k-1)*fibonacci(k-1)):((2*fibonacci(k-1)+fibonacci(k))*fibonacci(k));

}

int main(){


    unsigned int n,k;

    const unsigned int M = 1000000007;

    cin>>n;
    cin>>k;

    unsigned int a[n];

    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    for (int j = 0; j < k ; ++j) {
        unsigned int q;
        cin>>q;
        unsigned int c=0;
        for (int i = 0; i < q ; ++i) {
            c+=fibonacci(a[i]);
        }
        cout<<c%M;
    }
}