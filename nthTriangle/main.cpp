#include<bits/stdc++.h>

using namespace std;

int totient(int n){

    float result=n;

    for (int i = 2; i < sqrt(n) ; ++i) {

        if (n%i==0){
            while(n%i==0){
                n/=i;
            }
            result*=(1.0-1.0/(float)i);
        }

    }

    if(n>1){
        result*=(1.0-1.0/(float)n);
    }

    return (int)result;

}

int main(){

    int t;
    cin>>t;
    for (int i = 0; i < t ; ++i) {

        int a;
        cin>>a;
        cout<<totient(a)<<endl;

    }
}