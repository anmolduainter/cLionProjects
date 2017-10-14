#include<bits/stdc++.h>

using namespace std;


void Print(int a[][10],int r,int c){

    int i=0;
    int j=0;

    while((j>c) && (i>r)){

        for (int i1 = i; i1 < r ; ++i1) {
            cout<<a[i1][j]<<" ";
            i=i1;
        }
        j=j+1;

        for (int k = j; k < c ; ++k) {
            cout<<a[i][k]<<" ";
            j=k;
        }
        r--;

        for (int l = r; l >= 0 ; --l) {
            cout<<a[l][j]<<" ";
        }

        c--;

        for (int m = c; m >j; --m) {
            cout<<a[i][m]<<" ";
        }

        i++;

    }

}


int main(){


    int a[10][10]={
            {11,12,13,14},
            {21,22,23,24},
            {31,32,33,34},
            {35,36,37,38}
    };

    int r=4;
    int c=4;

    Print(a,r,c);


}
