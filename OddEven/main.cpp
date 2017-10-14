#include <iostream>


using namespace std;

int func(int arr[],int e,int s,int f){

    if (e<s){
        return -1;
    }

    if (arr[e]==f){
        return s;
    }

    func(arr,e-1,s,f);

}


int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n ; ++i) {
        cin>>arr[i];
    }

    int f;
    cin>>f;

    cout<<func(arr,n-1,0,f);

}