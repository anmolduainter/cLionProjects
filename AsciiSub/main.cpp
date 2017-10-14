#include<bits/stdc++.h>

using namespace std;

vector<string> v;

void PriAscii(char a[],int i){

    if (a[i]=='\0'){

        for (int j = 0; j < v.size() ; ++j) {
            cout<<v[i]<<endl;
            v.pop_back();
        }
        return;
    }

    cout<<to_string((int)a[i]);

    v.push_back(to_string(int(a[i])));
    PriAscii(a,i+1);

    string s(1,a[i]);
    cout<<s;
    v.push_back(s);
    PriAscii(a,i+1);

}


void SubSequences(char a[],int i,char out[],int j){

    if (a[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    out[j]=a[i];
    SubSequences(a,i+1,out,j+1);
    out[j]='\0';
    SubSequences(a,i+1,out,j);

}

int main(){

    char input[100],output[100];

    cin>>input;

    PriAscii(input,0);

    return 0;

//    SubSequences(input,0,output,0);


}