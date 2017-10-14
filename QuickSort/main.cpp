#include<bits/stdc++.h>

using namespace std;

void Shuffle(int a[],int s,int e){

    srand(time(NULL));

    int index;

    for (int i = e; i >0 ; i--) {

         index=rand()%(i+1);

        cout<<index<<endl;

        swap(a[i],a[index]);

    }


}



int Partition(int a[],int s,int e){

    // for swapping
    int i=s-1;
    int j=s;

    //Pivot point
    int pivot=a[e];

    //swap those which are less than pivot with bigger

    for(;j<=e;j++){
        // if elements is less than pivot
        if (a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }


    swap(a[i+1],a[e]);

    return i+1;



}

void QuickSort(int a[],int s,int e){

    if (s>=e){
        return;
    }

    int partition=Partition(a,s,e);

    QuickSort(a,0,partition-1);

    QuickSort(a,partition+1,e);


}

int main(){

    int a[]={1,2,3,4};


    int n=sizeof(a)/ sizeof(a[0]);


    Shuffle(a,0,n-1);

    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    QuickSort(a,0,n-1);

    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }

}