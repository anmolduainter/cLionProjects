#include<bits/stdc++.h>

using namespace std;


void TowerofHanoi(int n,char source,char helper,char destination){

    if (n==0){
        return;
    }

    TowerofHanoi(n-1,source,destination,helper);

    cout<<"Moving ring "<<n<<" from "<<source<<" to "<<destination<<endl;

    TowerofHanoi(n-1,helper,source,destination);


}

int main(){

    int n;
    cin>>n;
    TowerofHanoi(n,'A','C','B');


}