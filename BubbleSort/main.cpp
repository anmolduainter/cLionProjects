#include<bits/stdc++.h>

using namespace std;

void BubbleSort(int a[],int n){

    for (int i = 0; i <n ; ++i) {

        for (int j = 1; j < n-i ; ++j) {
            if (a[j-1]>a[j]){
                swap(a[j-1],a[j]);
            }
        }

    }


}

void InsertionSort(int a[],int n){

    for (int i = 1; i < n ; ++i) {

        int key=a[i];
        int j=i-1;

        while(a[j]>key && j>=0){
           a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;

    }

}


void SelectionSort(int input[],int n){


    for (int i = 0; i < n-1 ; ++i) {

        int min=i;

        for (int j = i+1; j < n ; ++j) {
            if (input[j]<input[min]){
                min=j;
            }
        }

        swap(input[i],input[min]);
    }

}

int main(){

    int n;
    cin>>n;
    int in[n];

    for (int i = 0; i < n ; ++i) {
        cin>>in[i];
    }


    SelectionSort(in,n);

    for (int j = 0; j < n ; ++j) {
        cout<<in[j]<<endl;
    }

    return 0;

}