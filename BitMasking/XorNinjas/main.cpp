#include<bits/stdc++.h>


using namespace std;

 int xorSum(int arr[],int n){

    unsigned int M=1000000007;

     int bits=0;

    for (int i = 0; i < n  ; ++i) {
        bits=bits|arr[i];
    }

     int ans=bits*(pow(2,n-1));

    int ans1=ans%M;

    return  ans1;

}

int main(){

    int t;

    cin>>t;

    for (int i = 0; i < t ; ++i) {

        int a;
        cin>>a;
        int arr[a];
        for (int j = 0; j < a; ++j) {
            cin>>arr[j];
        }
        cout<<xorSum(arr,a);
    }
    return 0;
}