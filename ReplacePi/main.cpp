#include <bits/stdc++.h>

using namespace std;

void palindrome(int arr[],int i,int j,int n,int k){

    if (i>=j){

        if(k==0){
            for (int i1 = 0; i1 < n ; ++i1) {
                cout<<arr[i1];
            }
        } else{


        }
        return;
    }


    if (k==0){
        cout<<"-1";
        return;
    }

    if (arr[i]!=arr[j]){
        if (arr[i]>arr[j]){
            arr[j]=arr[i];
        }
        else{
            arr[i]=arr[j];
        }
        k--;
    }

    palindrome(arr,i+1,j-1,n,k);
}

int main(){

    int n;
    int k;
    cin>>n>>k;

    string s;
    cin>>s;

    int arr[n];

    for (int i = 0; i < s.length() ; i++) {
        arr[i]=stoi(s.substr(i,1));
    }

    palindrome(arr,0,n-1,n,k);
}