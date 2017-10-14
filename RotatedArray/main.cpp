#include<bits/stdc++.h>

using namespace std;

void rotate90(int a[][100],int m,int n){

    // m- row
    //n -col

    for (int i = 0; i < m ; ++i) {
        for (int j = 0; j < n ; ++j) {

            if (j>i){
                int temp=a[j][i];
                a[j][i]=a[i][j];
                a[i][j]=temp;
            }

        }
    }

    int s=0;
    int e=m-1;
    while(s<=e){
        for (int i = 0; i < n ; ++i) {
            int temp=a[s][i];
            a[s][i]=a[e][i];
            a[e][i]=temp;
        }
        s++;
        e--;
    }

}


void PrintArray(int a[][100],int m,int n){

    for (int i = 0; i < m ; ++i) {
        for (int j = 0; j < n ; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main(){

    int n;
    cin>>n;

    int a[100][100];

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n ; ++j) {
            cin>>a[i][j];
        }
    }

    rotate90(a,n,n);

    PrintArray(a,n,n);


}