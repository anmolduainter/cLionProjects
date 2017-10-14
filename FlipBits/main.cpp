#include<bits/stdc++.h>
using namespace std;

unsigned int  ABCD(unsigned int b){
    unsigned int a=INT32_MAX+INT32_MAX+1;
    return a-b;
}

int main(){

    int t;

    cin>>t;

    for (int i = 0; i < t; ++i) {
        unsigned int a;
        cin>>a;
        cout<<ABCD(a)<<endl;
    }


  return 0;

}