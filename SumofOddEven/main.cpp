#include <bits/stdc++.h>

using namespace std;

void sum(string a){

    int even=0;
    int odd=0;
    for (int i = 0; i < a.length() ; ++i) {
        if (i&1){
            odd+=(a[i]-'0');
        }
        else{
            even+=(a[i]-'0');
        }
    }
    cout<<odd<<endl;
    cout<<even<<endl;
}

int main(){

    string a;
    cin>>a;
    sum(a);

}