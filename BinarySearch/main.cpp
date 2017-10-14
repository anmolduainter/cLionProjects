#include <iostream>

using namespace std;


bool Found(int input[],int i,int e,int k){

   int mid=(i+e)>>1;

  if (i>e){
    return false;
  }

   if (input[mid]==k){
     cout<<mid<<endl;
     return true;
   }

  else if (k<input[mid]){
     return Found(input,i,mid-1,k);
   }

  else{
     return Found(input,mid+1,e,k);
   }

}


int main(){

  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int k;
  cin>>k;
  if (!Found(a,0,n,k)){
    cout<<"-1"<<endl;
  }

  return 0;
}