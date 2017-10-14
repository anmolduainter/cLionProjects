#include<bits/stdc++.h>
using namespace std;


void CipherDecoding(char a[],int n,char output[],int k,int N){

    char given=a[n-1];

    output[N-1]=given;

    int i=n-1;
    int j=N-2;

    while(k>=0){
        //Do here
        output[j]=((given-'0')^(a[i]-'0'));
        given=output[j];
        j--;
        i--;
        k--;
    }

    output[N]='\0';

    for (int l = 0; l < N+1 ; ++l) {
        cout<<output[i]<<" ";
    }



}

int main(){

    char a[]="1110100110";

    int n=sizeof(a)/sizeof(a[0]);

    char output[8];

    CipherDecoding(a,n,output,4,7);

    return 0;
}