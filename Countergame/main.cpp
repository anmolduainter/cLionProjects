#include<bits/stdc++.h>

using namespace std;

int countBitsHack(int n){

  int ans=0;
  for( ;n>0; n = n&(n-1)){
    ans++;
  }
  return ans;
}

int main(){

  int t;
  cin>>t;


  for (int i = 0; i < t ; ++i) {


    int a;
    cin>>a;
    int count=0;

    while(a!=1){

      //multiple of 2
      if (countBitsHack(a)==1){
        a=a>>1;
        // cout<<a;
      }
        //not multiple of 2
      else{
        a=a-(a&(a-1));
        // cout<<a;
      }
      count++;
    }

    if (count&1){
      cout<<"Louis";
    }
    else{
      cout<<"Richard";
    }


  }

}