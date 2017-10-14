#include<bits/stdc++.h>
using namespace std;

void Subsets(int a[],int s, int e,int k,int out [],int j,int sum=0){




    if (s>e){

       // if (sum==k){

            for (int i = 0; i <sizeof(out) ; ++i) {
                cout<<out[i]<<" ";
            }

            cout<<endl;

       // }

        return;
    }

    out[j]=a[s];
    Subsets(a,s+1,e,k,out,j+1,sum+a[s]);

    Subsets(a,s+1,e,k,out,j,sum);

}

int main(){

    int a[]={1,2,3};

    int out[3];

    int k=5;

    Subsets(a,0,5,k,out,0);

    return  0;


}