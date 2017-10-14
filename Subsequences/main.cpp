#include<bits/stdc++.h>

using namespace std;


vector<string> v;


void CountSubse(int n){

    // 2^n
    cout<<(1<<n)<<endl;
    return;
}


void AsciiSubsequence(char a[],int n){

    string s(a);

    for (int i = 1; i <= n ; ++i) {

        for (int j = 0; j < n-1 ; ++j) {

            string a=s.substr(j,i);

            cout<<a<<endl;

        }

    }
    return;
}

void Subsequences(char input[],int i,char output[],int j){

    //Base Case

    if (input[i]=='\0'){

        output[j]='\0';

        cout<<output<<" ";

        AsciiSubsequence(output,strlen(output));

        return;

    }



    //Not include
    output[j]='\0';
    Subsequences(input,i+1,output,j);


    // To include
    output[j]=input[i];
    Subsequences(input,i+1,output,j+1);

}



int main(){

    char input[10],output[10];

    cin>>input;


//    //count sub
//    CountSubse(strlen(input));
//
    // Print all subseq
    Subsequences(input,0,output,0);

   // AsciiSubsequence(input,strlen(input));



}