#include <iostream>

using namespace std;


void XOR(char a[],int i,char b[]){

    if (a[i]=='\0'){
        return;
    }

    cout<<((a[i]-'0')^(b[i]-'0'));

    XOR(a,i+1,b);

}

int main(){

  int n;
    cin>>n;

    for (int i = 0; i < n ; ++i) {

        char a[100];
        char b[100];
        cin>>a;
        cin>>b;

        XOR(a,0,b);

        cout<<endl;

    }


    return 0;


}
