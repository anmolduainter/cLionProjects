#include<bits/stdc++.h>
using namespace std;

void checkingAporGp(long long int a,long long int b,long long int c){

    if (b-a == c-b){
        cout<<"AP"<<" "<<c+(c-b)<<"\n";
    }
    else{
        cout<<"GP"<<" "<<(c*c)/b<<"\n";
    }

}

//main function
int main(){

    long long int a,b,c;
    cin>>a>>b>>c;

    while(true){
        checkingAporGp(a,b,c);
        cin>>a>>b>>c;
        if (a==0 && b==0 && c==0){
            break;
        }
    }
}