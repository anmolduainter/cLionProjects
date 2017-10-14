#include<bits/stdc++.h>

using namespace std;

long long int countSubsets(long long int a[],long long int n,long long int k){


    long long int count=0;

    //start
    for (long long int i = 0; i < n-1 ; ++i) {

        //end
        for (long long int j = i; j < i+2 ; ++j) {

            long long int sum=0;

            for (long long int l = i; l <= j ; ++l) {
      //          cout<<a[l]<<" ";
                sum+=a[l];
            }

      //      cout<<endl;
     //       cout<<"Sum : "<<sum<<endl;
            if (sum <= k){
                count++;
            }
        }
    }

   // cout<<"Count : "<<count<<endl;

    return (count+1);
}



//Main Function
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l,t;

    cin>>l>>t;

    long long int a[l];

    for (long long int i = 0; i < l ; ++i) {
        cin>>a[i];
    }

    float a1 = (l*(l+1))>>1;
    long long int a2=countSubsets(a,l,t);
   // cout<<"Subsets : "<<a1<<endl;
    cout<<a2/a1;

}