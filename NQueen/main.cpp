#include<bits/stdc++.h>

using namespace std;



bool isSafe(int board[][10],int i,int j,int n){

    // col

    for (int row = 0; row <=i ; ++row) {
        if (board[row][j]==1){
            return false;
        }
    }

    //left diag

    int x=i;
    int y=j;

    while(x>=0 && y>=0){

        if (board[x][y]==1){
            return false;
        }

        x--;
        y--;
    }

    //right diag
    x=i;
    y=j;

    while (x>=0 && y<n){
        if (board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }


    return true;

}


bool nQueen(int board[][10],int i,int n){

    //Base Case

    if(i==n){


        for (int j = 0; j < n ; ++j) {
            for (int k = 0; k < n ; ++k) {
                if (board[j][k]==1){
                    cout<<"Q";
                } else{
                    cout<<"_";
                }
            }
            cout<<endl;

        }

        return true;
    }


    //Recursive Case

    for (int j = 0; j < n ; ++j) {

        if (isSafe(board,i,j,n)){

            board[i][j]=1;

            bool rakhPayee=nQueen(board,i+1,n);

            if (rakhPayee){
                return true;
            }

            board[i][j]=0;

        }


    }

    return false;


}


int main(){

    int n;
    cin>>n;

    int board[n][10]={0};


    nQueen(board,0,n);



}