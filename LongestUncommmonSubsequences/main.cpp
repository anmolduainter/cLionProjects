#include<bits/stdc++.h>

using namespace std;

void uncommon(string s1,string s2){

    long long int dp[s2.length()+1][s1.length()+1];

    for (long long int i = 0; i <= s2.length() ; ++i) {
        for (long long int j = 0; j <= s1.length() ; ++j) {
            if (i==0 || j==0){
                dp[i][j]=0;
            } else if(s2[i-1]!=s1[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<dp[s2.length()][s1.length()];

}

//Main function
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    string s2;

    cin>>s1;
    cin>>s2;

    uncommon(s1,s2);


}