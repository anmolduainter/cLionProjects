#include<bits/stdc++.h>

using namespace std;

//SEQ problem
int SEQ(int b[],int c[],int k,int n){

       if (n<=k){
         return b[n-1];
       }

        int a=0;
        for (int i = 1; i <= k ; ++i) {
            a=a+(c[i-1]*SEQ(b,c,k,n-i));
        }
    return a;
}
//
//int main(){
//
//    int t;
//    cin>>t;
//    const unsigned int M = 1000000000;
//
//    for (int i = 0; i < t ; ++i) {
//
//        int k;
//        cin>>k;
//        int b[k];
//        int c[k];
//
//        for (int j = 0; j < k ; ++j) {
//            cin>>b[j];
//        }
//
//        for (int l = 0; l < k ; ++l) {
//            cin>>c[l];
//        }
//        int n;
//
//        cin>>n;
//
//        cout<<(SEQ(b,c,k,n)%M)<<endl;
//
//    }
//
//    return 0;
//}

//Count divisor
unsigned int countDivisor(unsigned int n){

    unsigned int count=0;

    for (unsigned int i = 1; i <= sqrt(n) ; ++i) {
        if (n%i==0){
            if (n/i==i){
                count++;
            }
            else{
                count=count+2;
            }
        }
    }
    return count;
}


int main(){

    unsigned int t;
    cin>>t;

    const unsigned int M = 1000000007;

    for (int i = 0; i < t ; ++i) {
        unsigned int a;
        cin>>a;
        unsigned int b=1;
        for (int j = 0; j < a ; ++j) {
            unsigned int c;
            cin>>c;
            b=(b*c);
        }
        cout<<(countDivisor(b)%M)<<endl;
    }
}









