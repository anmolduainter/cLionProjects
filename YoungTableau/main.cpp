#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;

/*
 *                   {10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50},
 */

void reOrder(int a[][4],int i=0,int j=0){

    int downVal=(i+1<4)?a[i+1][j]:INF;
    int rightVal=(j+1<4)?a[i][j+1]:INF;

    if (downVal==INF && rightVal==INF){
        return;
    }

    if (downVal<rightVal){
        a[i][j]=downVal;
        a[i+1][j]=INF;
        reOrder(a,i+1,j);
    }
    else{
        a[i][j]=rightVal;
        a[i][j+1]=INF;
        reOrder(a,i,j+1);
    }
}

int extractMin(int a[][4]){
    int min=a[0][0];
    a[0][0]=INF;
    reOrder(a);
    return min;
}

void sort(int a[][4]){
    cout<<"Sorted Elements : "<<endl;
    for (int i = 0; i < 16 ; ++i) {
        cout<<extractMin(a)<<" ";
    }
}

int main(){

    int a[4][4]={ {10, 20, 30, 40},
                  {15, 25, 35, 45},
                  {27, 29, 37, 48},
                  {32, 33, 39, 50}};


    sort(a);

}