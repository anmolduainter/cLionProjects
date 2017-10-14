#include<bits/stdc++.h>

using namespace std;

int CoinChange(int a[],int m,int n){

    int x;
    int y;
    int table[n+1][m];

    for (int i = 0; i < m ; ++i) {
           table[0][i]=1;
    }

    for (int i = 1; i < n+1 ; ++i) {

        for (int j = 0; j < m ; ++j) {

            x=(i-a[j]>=0)?table[i-a[j]][j]:0;
            y=(j>=1)?table[i][j-1]:0;

            table[i][j]=x+y;

        }

    }

    return table[n][m-1];

}

int main(){

    int a;
    int b;
    cin>>a;
    cin>>b;

    int in[b];

    for (int i = 0; i < b ; ++i) {
        cin>>in[i];
    }

    cout<<CoinChange(in,b,a);

}