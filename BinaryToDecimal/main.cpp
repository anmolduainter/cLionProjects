#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void BtoD(string s,int n){

    int out=0;

    for (int i = 0; i < n ; ++i) {

        out+=(s[i]-'0')*(1<<(n-i-1));

    }

    cout<<out;

}

int main(){

   string s;

    vector<char> v;

    cin>>s;

    BtoD(s,s.length());

    return 0;
}