#include<bits/stdc++.h>

using namespace std;

//Recursion
int PowerSum(int total,int power,int num){

    //static cast ?

    int a= static_cast<int>(total-(pow(num,power)));

    //Base case

    if(a<0){
        return 0;
    }

    else if(a==0){
        return 1;
    }

    else{
        return PowerSum(a,power,num+1)+PowerSum(total,power,num+1);
    }
}

int main(){

    int a;
    int b;

    cin>>a;
    cin>>b;

    cout<<PowerSum(a,b,1);



 return 0;
}