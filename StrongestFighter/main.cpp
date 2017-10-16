#include<bits/stdc++.h>

using namespace std;

void maxK(int a[],int size,int k){

    priority_queue<int> p;
    for (int i = 0; i < size-(k-1) ; ++i) {
        for (int j = i; j < k+i ; ++j) {
            p.push(a[j]);
        }
        cout<<p.top()<<" ";
        p.pop();
        p.pop();
    }

}

int main(){

    int t;
    cin>>t;
    int a[t];
    for (int i = 0; i < t; ++i) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    maxK(a,t,k);

}