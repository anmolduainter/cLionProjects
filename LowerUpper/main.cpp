#include<bits/stdc++.h>

using namespace std;

int LowerBound(int a[],int n,int k){

    //start
    int s=0;
    //end;
    int e=n-1;

    int ans=-1;

    while(s<=e){

        int mid=(s+e)>>1;

        if (a[mid]==k){
            ans=mid;
            e=mid-1;
        }

        else if (a[mid]>k){
            e=mid-1;
        }

        else{
            s=mid+1;
        }

    }

    return ans;

}

int UpperBound(int a[],int n,int k){

    //start
    int s=0;
    //end;
    int e=n-1;

    int ans=-1;

    while(s<=e){

        int mid=(s+e)>>1;

        if (a[mid]==k){
            ans=mid;
            s=mid+1;
        }

        else if (a[mid]>k){
            e=mid-1;
        }

        else{
            s=mid+1;
        }

    }

    return ans;

}

int main(){

    int n;

    cin>>n;

    int a[n];

    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    int t;

    cin>>t;

//    cout<<LowerBound(a,n,t)<<" "<<UpperBound(a,n,t)<<endl;

    for (int j = 0; j < t ; ++j) {

        int no;

        cin>>no;

        cout<<LowerBound(a,n,no)<<" "<<UpperBound(a,n,no)<<endl;

    }

    return 0;

}