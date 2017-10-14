#include <bits/stdc++.h>

using namespace std;

int SIZE=32;

int unique(int a[],int n){

    int x;
    int sum;
    int result=0;

    //Iterate over every bit
    for (int i = 0; i < SIZE ; ++i) {

        sum=0;

        x=1<<i;

        for (int j = 0; j < n ; ++j) {
            if(a[j]&x){
                sum++;
            }
        }

        if (sum%3){
            result |= x;
        }

    }


    return  result;


}

int main(){

    int n;
    cin>>n;

    int input[n];

    for (int i = 0; i < n ; ++i) {
        cin>>input[i];
    }

    cout<<unique(input,n);

    return 0;

}