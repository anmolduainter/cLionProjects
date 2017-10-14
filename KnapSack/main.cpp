#include<bits/stdc++.h>

using namespace std;

int KnapSack(int W,int w[],int v[],int n){

    int dp[n+1][W+1];

    for (int i = 0; i <= n ; ++i) {
        for (int j = 0; j <= W ; ++j) {

            if (i==0 || j==0){
                dp[i][j]=0;
            }
            else if (w[i-1]<=W){
                dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
            }

            else{
                dp[i][j]=dp[i-1][j];
            }

        }
    }

    return dp[n][W];
}

int main(){

    int W;
    cin>>W;

    int N;
    cin>>N;

    int w[N];
    int v[N];

    for (int i = 0; i < N ; ++i) {
        cin>>w[i];
        cin>>v[i];
    }

    cout<<KnapSack(W,w,v,N);

    return 0;

}