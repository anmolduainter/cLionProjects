#include<bits/stdc++.h>

using namespace std;

void Transpose(int a[][10],int m,int n){

   for (int i = 0; i < m ; ++i) {
      for (int j = 0; j < n ; ++j) {
         if (j>i){
           int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
         }
      }
   }


}


void Print(int a[][10],int m,int n){

   // m- row
   // n- col

   int i=0;

   while(i<m){

      for (int j = 0; j < n ; ++j) {
         cout<<a[i][j]<<", ";
      }

      if ((i+1)<m){
         for (int k = n-1; k >=0 ; --k) {
            cout<<a[i+1][k]<<", ";
         }
      }

      i=i+2;

   }


}

void PrintCol(int a[][10],int m,int n){

   //m- row
   // n- col

   int j=0;

   while(j<n){

      for (int i = 0; i < m; ++i) {
         cout<<a[i][j]<<", ";
      }

      if (j+1<n){
         for (int k = m-1; k >=0 ; --k) {
             cout<<a[k][j+1]<<", ";
         }
      }


      j=j+2;


   }
}


int main(){

   int row;
   int col;

   cin>>row;
   cin>>col;

   int a[10][10];

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col ; ++j) {
         cin>>a[i][j];
      }
   }

   PrintCol(a,row,col);

   cout<<"END";

}