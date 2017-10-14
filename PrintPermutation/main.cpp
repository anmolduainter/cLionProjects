#include<bits/stdc++.h>

using namespace std;

set<string> v;
set<string>::iterator itr;

void Prin(char a[],int i){

 if (a[i]=='\0'){
  string s(a);
  v.insert(s);
 // cout<<a<<endl;
  return;
 }

 for (int j = i; a[j]!='\0' ; ++j) {

  swap(a[i],a[j]);

  Prin(a,i+1);

  swap(a[i],a[j]);

 }


}

int main(){

 char in[20];

 cin>>in;

 Prin(in,0);

 for (itr=v.begin();itr!=v.end();itr++) {
    cout<<*itr<<endl;
 }

 return 0;

}
