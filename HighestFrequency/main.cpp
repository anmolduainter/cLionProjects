#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    int a[t];
    for (int i = 0; i < t ; ++i) {
        cin>>a[i];
    }

    unordered_map<int,int> m;
//    for (int j = 0; j < t; ++j) {
//        m[a[j]]=0;
//    }

    for (int k = 0; k < t ; ++k) {
        m[a[k]]++;
    }

    int max=-1;
    int key;
    for (auto itr = m.begin(); itr!=m.end() ; itr++) {
        if (max<=itr->second){
            max=itr->second;
            key=itr->first;
        }
    }

    cout<<key<<endl;
}