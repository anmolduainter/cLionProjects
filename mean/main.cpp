#include<bits/stdc++.h>

using namespace std;

unsigned int index(unsigned int arr[],int l,int R){

    unsigned int m= (unsigned int) ((l + R) >> 1);

    return arr[m-1];

}


//Main function
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n,q;
    cin>>n>>q;
    unsigned int a[n];

    for (unsigned int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    for (unsigned int j = 0; j < q ; ++j) {
        unsigned int l,r;
        cin>>l>>r;
        cout<<index(a,l,r)<<"\n";
    }

}