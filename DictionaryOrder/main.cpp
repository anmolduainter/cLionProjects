
#include<bits/stdc++.h>

using namespace std;

set<string> v;

set<string>::iterator iteratorSet;

void printDict(char input[],int i){

    if (input[i]=='\0'){

        string s(input);
        v.insert(s);

    }

    for(int j=i;input[j]!='\0';j++){

        swap(input[i],input[j]);

        printDict(input,i+1);

        swap(input[i],input[j]);
    }


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char input[100];

    cin>>input;

    string s(input);

    printDict(input,0);

    for (iteratorSet=v.begin();iteratorSet!=v.end();iteratorSet++) {
        if ((*iteratorSet)>s){
            cout<<*iteratorSet<<"\n";
        }
    }
}