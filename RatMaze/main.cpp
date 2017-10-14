#include<bits/stdc++.h>

using namespace std;

void func1(char a[],int n){

    int no=pow(2,n);

    for (int i = 0; i < no ; ++i) {

        char ans=' ';

        for (;i>=0 ;i=i>>1) {
           ans=ans+a[i&1];
        }

        cout<<endl;

    }


}


int main(){

    char a[]={'a','b','c'};

    int n=sizeof(a)/ sizeof(a[0]);

    func1(a,n);

}
