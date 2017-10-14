#include<bits/stdc++.h>

using namespace std;

void getResp(char a[],int n){

    int XOR = 0;
    int x=0;
    int y=0;

    for (int i = 0; i < n ; ++i) {
        XOR = XOR^(a[i]-'0');
    }

    int setBit=XOR & ~(XOR-1);

    for (int j = 0; j < n ; ++j) {
        if (a[j]&setBit){
            x=x^(a[j]-'0');
        }
        else{
            y=y^(a[j]-'0');
        }
    }

    if (x<y){

    }

}

void removeSpaces(char str[],int len)
{
    int count=0;
    for (int i = 0; i <len ; ++i) {
        cout<<str[i]<<" ";
        if (str[i]!=' '){
           str[count++]=str[i];
        }
    }

}

int main(){

    int a[100];

    char temp;

    while(){

    }


}