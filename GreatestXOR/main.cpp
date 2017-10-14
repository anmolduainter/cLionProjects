#include<bits/stdc++.h>


using namespace std;

int main(){

    int a=10;

    int count=0;
    for (int i = 1; i < a  ; ++i) {
        if ((a^i)>a){
            count++;
        }
    }

    cout<<count;

    return 0;
}