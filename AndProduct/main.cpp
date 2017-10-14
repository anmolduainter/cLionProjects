#include<bits/stdc++.h>

using namespace std;

int  And(int a,int b){

    int c=a;

    for (int i = a+1; i <=b ; ++i) {
        c=(c&i);
    }

    return c;

}

int And2(int a,int b){

    cout<<(a^b)<<endl;

    return (1 << (int)log2(a^b));

}

int main(){

    int t;
    cin>>t;

    for (int i = 0; i < t ; ++i) {
        int a;
        int b;
        cin>>a;
        cin>>b;
        cout<<And2(a,b)<<endl;
    }

}