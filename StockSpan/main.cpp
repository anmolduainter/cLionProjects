#include<bits/stdc++.h>
using namespace std;

void StockSpan(int a[],int size){

    int out[size];

    // storing the index
    stack<int> s;
    s.push(0);

    out[0]=1;

    for (int i = 1; i < size ; ++i) {

        while(!s.empty() && a[s.top()]<=a[i]){
            s.pop();
        }

        out[i]=(s.empty())?(i+1):(i-s.top());

        s.push(i);
    }

    for (int j = 0; j < size ; ++j) {
        cout<<out[j]<<" ";
    }

}

int main(){

    int t;
    cin>>t;
    int a[t];

    for (int i = 0; i < t ; ++i) {
        cin>>a[i];
    }


    StockSpan(a,t);

}