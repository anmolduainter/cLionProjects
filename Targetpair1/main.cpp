#include<bits/stdc++.h>

using namespace std;

void PrintAll(int a[],int n,int sum){

    if (n==1){
        return;
    }

    for (int i = 0; i < n ; ++i) {

        for (int j = i+1; j < n ; ++j) {

            if (a[i]+a[j]==sum){
                cout<<a[i]<<" and "<<a[j]<<endl;
            }

        }

    }


}

int main(){

    int n;
     cin>>n;
    int a[n];

    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    int s;
    cin>>s;

    PrintAll(a,n,s);

    return 0;
}