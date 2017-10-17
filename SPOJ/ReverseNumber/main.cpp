#include<bits/stdc++.h>
using namespace std;

void reverse(string &a){
    reverse(a.begin(),a.end());
}

int main(){

    long long int t;
    cin>>t;

    for (int i = 0; i < t ; ++i) {
        string a,b;
        cin>>a>>b;
        reverse(a);
        reverse(b);
        int sum=stoi(a)+stoi(b);
        string sumS=to_string(sum);
        reverse(sumS);
        cout<<stoi(sumS)<<endl;
    }

}