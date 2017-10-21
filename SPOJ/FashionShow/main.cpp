#include<bits/stdc++.h>

using namespace std;

void fashinShow(vector<long long int> men, vector<long long int> women){

    sort(men.begin(),men.end());
    sort(women.begin(),women.end());
    long long int sum=0;
    for (long long int i = 0; i < men.size() ; ++i) {
        sum+=(men[i]*women[i]);
    }
    cout<<sum<<"\n";
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;

    for (long long int i = 0; i < t ; ++i) {
        long long int t1;
        cin>>t1;
        vector<long long int> men;
        vector<long long int> women;
        for (long long int j = 0; j < t1; ++j) {
            long long int a;
            cin>>a;
            men.push_back(a);
        }
        for (long long int k = 0; k < t1 ; ++k) {
            long long int a;
            cin>>a;
            women.push_back(a);
        }
        fashinShow(men,women);
    }




}