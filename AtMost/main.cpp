#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void SUM(int a[],int n){

 for (int i = 0; i < n ; ++i) {

  int sum=0;
   for (int j = 0; j < n ; ++j) {
     if (a[i]==a[j]){
      continue;
     }
    sum+=a[j];
   }
  v.push_back(sum);
 }

 sort(v.begin(),v.end());

 cout<<v[0]<<" "<<v[v.size()-1];
}



int main(){

 int a[]={1,2,3,4,5};

 int n=sizeof(a)/sizeof(a[0]);

 SUM(a,n);
}