#include <bits/stdc++.h>

using namespace std;


void func(char a[],int i,char output[],int j){


    if(a[i]=='\0'){
        output[j]='\0';

        for (int k = 0; k < strlen(output) ; ++k) {
            if (output[k]=='.'){
              cout<<int(a[k]);
            }
            cout<<output[k];
        }

        cout<<endl;

        return;

    }


    //Recursive Case

    output[j]=a[i];
   // cout<<output[j];
    func(a,i+1,output,j+1);

    output[j]='.';
    func(a,i+1,output,j+1);

}


int main() {


    char a[]={'a','b'};

    char output[10];

    func(a,0,output,0);


    return 0;
}