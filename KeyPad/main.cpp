#include<bits/stdc++.h>

using namespace std;

string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string searchIn[] = {
        "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
        "utkarsh", "divyam", "vidhi", "sparsh", "akku"
};

void PrintCodes(char input[],int i,char output[],int j){

    if (input[i]=='\0'){

        output[j]='\0';

        string s(output);

        for (int k = 0; k < 11; ++k) {

            if (searchIn[k].find(s)!=std::string::npos){
                cout<<searchIn[k]<<endl;
            }

        }

        return;
    }

    int currentDigit=input[i]-'0';

    if (currentDigit==0 || currentDigit==1){
        PrintCodes(input,i+1,output,j);
    }

    for (int k = 0; k < keypad[currentDigit].size() ; ++k) {

        output[j]=keypad[currentDigit][k];
        PrintCodes(input,i+1,output,j+1);

    }
}


int main(){

    char input[100],output[100];

    cin>>input;

    PrintCodes(input,0,output,0);

    return  0;

}