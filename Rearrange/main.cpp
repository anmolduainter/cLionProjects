#include<bits/stdc++.h>

using namespace std;

void ReverseEvery(vector<int> &v){
    for (int i = 0; i <= (v.size()>>1) ; ++i) {
        reverse(v.begin()+i,v.end()-i);
    }
}

void Printvector(vector<int> &v){
    for (int i = 0; i < v.size() ; ++i) {
        cout<<v[i]<<" ";
    }
}

int main(){

    long int n;
    cin>>n;

   vector<int> v;
    for (int i = 0; i < n ; ++i) {
        int a;
        cin>>a;
        v.push_back(a);
    }

    ReverseEvery(v);
    Printvector(v);
}