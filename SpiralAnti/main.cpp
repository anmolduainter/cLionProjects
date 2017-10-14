#include<bits/stdc++.h>

using namespace std;

void PrintAnti(int a[][10],int m,int n){

    int k = 0, l = 0;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while(k<m && l<n){

        //Printing first col
        for (int j = k; j < m; ++j) {
            cout<<a[j][l]<<", ";
        }
        l++;

        //Printing last row
        for (int i1 = l; i1 < n ; ++i1) {
            cout<<a[m-1][i1]<<", ";
        }
        m--;

        if (k<=m) {

            //Printing last col
            for (int k1 = m - 1; k1 >= k; --k1) {
                cout << a[k1][n - 1] << ", ";
            }

            n--;
        }

        if (l<=n) {

            //Printing first row
            for (int l1 = n - 1; l1 >= l; --l1) {
                cout << a[k][l1] << ", ";
            }
            k++;
        }
    }

    cout<<"END"<<endl;


}


//Main function
int main(){

    int rows,col;
    cin>>rows>>col;

    int arr[10][10];

    for (int i = 0; i < rows ; ++i) {
        for (int j = 0; j < col ; ++j) {
            cin>>arr[i][j];
        }
    }

    PrintAnti(arr,rows,col);
}