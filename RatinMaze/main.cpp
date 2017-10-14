#include <bits/stdc++.h>
using namespace std;

bool RatinaMaze(char maze[][100],int output[][100],int i,int j,int row,int col){

    if (i==row && j==col){
        output[i][j]=1;

        for (int k = 0; k <= row ; ++k) {
            for (int l = 0; l <= col ; ++l) {
                cout<<output[k][l]<<" ";
            }
            cout<<endl;
        }

        return true;
    }

    output[i][j]=1;
    if(j<col && maze[i][j+1]!='X'){
        bool pathExists=RatinaMaze(maze,output,i,j+1,row,col);
        if (pathExists){
            return true;
        }
    }

    if (i<row && maze[i+1][j]!='X'){
        bool pathExists=RatinaMaze(maze,output,i+1,j,row,col);
        if (pathExists){
            return true;
        }
    }

    output[i][j]=0;
    return false;

}

int main(){


    int rows;
    int col;

    cin>>rows>>col;

    char maze[rows][100];

    for (int i = 0; i < rows ; ++i) {
        for (int j = 0; j < col ; ++j) {
            cin>>maze[i][j];
        }
    }

    int output[rows][100]={0};
    if (RatinaMaze(maze,output,0,0,rows-1,col-1)==false){
        cout<<"No";
    };

    return 0;
}