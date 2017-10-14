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

int BinarySearch(int a[],int s,int e,int k){

    while (s<=e){

        int mid=(s+e)>>1;

     //   cout<< "mid BinarySearch : "<<mid<<endl;

        if (a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }

    return -1;

}


int Index(int a[],int n,int k){

    int pivot=Pivot(a,n);

   // cout<<"Pivot : at index : "<<pivot<<endl;

    if (k>=a[0]){
        return BinarySearch(a,0,pivot,k);
    }

    else{
        return BinarySearch(a,pivot,n-1,k);
    }

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

    cout<<Index(a,n,k);

    return 0;
}