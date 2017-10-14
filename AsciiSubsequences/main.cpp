#include<bits/stdc++.h>

using namespace std;

vector<string> v;
void asciiSub(char input[],char output[],int i=0,int j=0){

    if (input[i]=='\0'){
        output[j]='\0';
        string s(output);
        v.push_back(s);
        return;
    }

    //normal
    output[j]='\0';
    asciiSub(input,output,i+1,j);

    output[j]=input[i];
    asciiSub(input,output,i+1,j+1);

    output[j]=to_string((int)input[i])[0];
    output[j+1]=to_string((int)input[i])[1];
    asciiSub(input,output,i+1,j+2);

}

void printVector(){

    cout<<v.size()<<endl;

    for (int i = 0; i <v.size() ; ++i) {

        cout<<v[i]<<" ";
    }
}

int main(){

    char input[100], output[100];
    cin>>input;
    asciiSub(input,output);
    printVector();
}