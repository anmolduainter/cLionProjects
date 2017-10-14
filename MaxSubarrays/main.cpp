#include<bits/stdc++.h>

using namespace std;

void maxSubArray(int input[],int n){

    int max_so_far=0;
    int max_ending_here=0;

    for (int i = 0; i < n; ++i) {

        max_ending_here=max_ending_here+input[i];
        if (max_so_far<max_ending_here){
            max_so_far=max_ending_here;
        }
        if (max_ending_here<0){
            max_ending_here=0;
        }

    }

    cout<<max_so_far<<endl;

}


int main(){

    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    maxSubArray(a,n);

}