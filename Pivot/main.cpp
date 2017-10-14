#include<bits/stdc++.h>

using namespace std;

int Pivot(int a[],int n){

    //start
    int s=0;
    //end
    int e=n-1;

    while(s<=e){

        int mid=(s+e)>>1;

        // cout<<"mid : "<<mid<<endl;

        //local maxima
        if (a[mid]>a[mid-1] && a[mid]>a[mid+1]){
            return mid;
        }

        //local minima

        if (a[mid]<a[mid-1] && a[mid]<a[mid+1]){
            return mid-1;
        }

        if (a[mid]>=a[s]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }


    }
}


int main(){

    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n ; ++i) {

        cin>>a[i];

    }

    cout<<Pivot(a,n);

}