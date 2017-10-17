#include<bits/stdc++.h>
using namespace std;

int squareCountinGrid(int n){
    if (n==0 || n==1){
        return n;
    }
    return n*n+squareCountinGrid(n-1);
}

//main function
int main(){

    int d;
    cin>>d;
    while(d!=0){
      cout<<squareCountinGrid(d)<<endl;
        cin>>d;
    }

}