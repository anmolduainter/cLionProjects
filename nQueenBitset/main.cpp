#include<bits/stdc++.h>

using namespace std;

bitset<30> col,d1,d2;


//function to count the no. of queen
void nQueen(int i,int n,int &ans){

    if (i==n){
        ans++;
        return;
    }

    for (int j = 0; j < n ; ++j) {

        if (!col[j] && !d1[i-j+n-1] && !d2[i+j]){

            col[j]=d1[i-j+n-1]=d2[i+j]=1;
            nQueen(i+1,n,ans);
            //BackTracking
            col[j]=d1[i-j+n-1]=d2[i+j]=0;
        }
    }
}

int main(){

    int n;
    cin>>n;

    int ans=0;

   nQueen(0,n,ans);

    cout<<ans<<endl;
}
