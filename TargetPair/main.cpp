#include<bits/stdc++.h>

using namespace std;

int Sum(int a[],int n,int sum){

    int curr_sum=a[0];
    int start=0;
    int count=0;

    for (int i = 1; i < n; ++i) {

        while(curr_sum>sum && start<i-1){
            curr_sum=curr_sum-a[i];
            start++;
        }

        if (curr_sum==sum){
            count++;
        }

        if (i<n){
            curr_sum=curr_sum+a[i];
        }

    }

    return count;
}

int main(){

    int n;
     cin>>n;
    int a[n];
    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    int k;

    cin>>k;

    cout<<Sum(a,n,k);

    return 0;

}