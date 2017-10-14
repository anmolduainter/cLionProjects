#include<bits/stdc++.h>
using namespace std;

string a[10]={"","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};

vector<string> v;

void allSub(char input[],char output[],int i=0,int j=0){

    if (input[i]=='\0'){
        output[j]='\0';
        string s(output);
        v.push_back(s);
        return;
    }

    int currentDigit=input[i]-'0';

    if (currentDigit==0){
        allSub(input,output,i+1,j);
    }

    else{
        for (int k = 0; k < a[currentDigit].length() ; ++k) {
            output[j]=a[currentDigit][k];
            allSub(input,output,i+1,j+1);
        }
    }
}

void printVector(){

    cout<<v.size()<<endl;

    for (int i = 0; i <v.size() ; ++i) {
        cout<<v[i]<<" ";
    }

}

int main(){

    char input[100],output[100];

    cin>>input;

    allSub(input,output);

    printVector();

  return 0;
}