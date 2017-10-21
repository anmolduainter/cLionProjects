#include<bits/stdc++.h>
using namespace std;


void Candies(vector<long long int> v){

    //Calculating Mean
    long long int sum=0;
    long long int mean;
    for (long long int i = 0; i < v.size() ; ++i) {
        sum+=v[i];
    }

    mean=sum>>1;

    if (sum%2==0){
        long long int count=0;
        for (long long int i = 0; i < v.size() ; ++i) {
            if (v[i]<mean){
                count++;
            }
        }

        cout<<count<<"\n";
    }
    else{
        cout<<"-1"<<"\n";
    }

}


//Main function
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;

    while(true){
        vector<long long int> v;
        for (int i = 0; i < t ; ++i) {
            long long int a;
            cin>>a;
            v.push_back(a);
        }
        Candies(v);
        cin>>t;
        if (t==-1){
            break;
        }
    }



}