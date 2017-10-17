#include<bits/stdc++.h>

using namespace std;

void PrintAll(long long int a[],long long int n,long long int sum){

    if (n==1){
        return;
    }

    for (long long int i = 0; i < n-1 ; ++i) {

        for (long long int j = i+1; j < n ; ++j) {

            if (a[i]+a[j]==sum){
                cout<<a[i]<<" and "<<a[j]<<endl;
            }

        }

    }


}

int main(){

    long long int n;
    cin>>n;
    long long int a[n];

    for (long long int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    long long int s;
    cin>>s;

    PrintAll(a,n,s);

    return 0;
}