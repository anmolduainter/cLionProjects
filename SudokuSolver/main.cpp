#include <bits/stdc++.h>
using namespace std;


bool isSafe(int a[][9],int row,int col,int n,int k){

    for (int i = 0; i < n ; ++i) {
        if (a[i][col]==k || a[row][i]==k){
            return false;
        }
    }

    int subn=sqrt(n);
    int subx=(row/subn)*subn;
    int suby=(col/subn)*subn;

    for (int i = subx; i < subx+subn ; ++i) {
        for (int j = suby; j < suby+subn ; ++j) {
          if (a[i][j]==k){
              return false;
          }
        }
    }
    return true;
}


bool isSafe1(int a[][6],int row,int col,int n,int k){

    for (int i = 0; i < n ; ++i) {
        if (a[i][col]==k || a[row][i]==k){
            return false;
        }
    }

    int subn=sqrt(n);
    int subx=(row/subn)*subn;
    int suby=(col/subn)*subn;

    for (int i = subx; i < subx+subn ; ++i) {
        for (int j = suby; j < suby+subn ; ++j) {
            if (a[i][j]==k){
                return false;
            }
        }
    }
    return true;
}


bool SolveSudoku(int a[][9],int row,int col,int n){

    if(row==n){
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < n ; ++j) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if (col==n){
        return  SolveSudoku(a,row+1,0,n);
       // return;
    }

    if(a[row][col]!=0){
        return SolveSudoku(a,row,col+1,n);
    }

    for (int i = 1; i <= n ; ++i) {

        if (isSafe(a,row,col,n,i)){
            a[row][col]=i;
            bool sovehui=SolveSudoku(a,row,col+1,n);
            if(sovehui){
                return true;
            }
        }
    }

    a[row][col]=0;
    return false;

}



bool SolveSudoku1(int a[][6],int row,int col,int n){

    if(row==n){
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < n ; ++j) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if (col==n){
        return  SolveSudoku1(a,row+1,0,n);
        // return;
    }

    if(a[row][col]!=0){
        return SolveSudoku1(a,row,col+1,n);
    }

    for (int i = 1; i <= n ; ++i) {

        if (isSafe1(a,row,col,n,i)){
            a[row][col]=i;
            bool sovehui=SolveSudoku1(a,row,col+1,n);
            if(sovehui){
                return true;
            }
        }
    }

    a[row][col]=0;
    return false;

}

// Main
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    if (n==9){
        int mat[n][9];
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
            }
        }
        SolveSudoku(mat,0,0,9);
    }
    else if (n==6){
        int mat[n][6];
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < n ; ++j) {
                cin>>mat[i][j];
            }
        SolveSudoku1(mat,0,0,6);
    }
}
}