#include<bits/stdc++.h>
using namespace std;

vector<string> v;
vector<string>::iterator itr;

void Subsequence(char c[],int i,char out[],int j){

    //Base Case
    if (c[i]=='\0'){
        out[j]='\0';
        string s(out);
      //  cout<<s;
        v.push_back(s);
        return;
    }

    //Recursive Case

    out[j]=c[i];
    Subsequence(c,i+1,out,j+1);
    out[j]='\0';
    Subsequence(c,i+1,out,j);

}


int main(){


    int a;
    cin>>a;
    for (int i = 0; i < a ; ++i) {
        char in[21];
        char out[21];
        cin>>in;
        Subsequence(in,0,out,0);
    }

    sort(v.begin(),v.end());

    for ( itr=v.begin();itr!=v.end();itr++) {

        cout<<(*itr)<<endl;

    }


}