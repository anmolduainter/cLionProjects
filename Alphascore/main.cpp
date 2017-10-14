#include<bits/stdc++.h>

using namespace std;

vector<unsigned int> alpha;

//Merge function
int merge1(unsigned int a[],unsigned int s,unsigned int e,unsigned int mid){
    unsigned int size=mid-s+1;
    unsigned int count=0;
    for (unsigned int i = 0; i < size; ++i) {
        if (a[i]<a[mid]){
            count+=a[i];
        }
    }
    //alpha.push_back(count);
    return count;
}

//Partition function
long long int c=0;
void partition(unsigned int a[],unsigned int s,unsigned int e){

    if (s<e){
        int mid=s+(e-s)/2;
        partition(a,s,mid);
        partition(a,mid+1,e);
        c=c+merge1(a,0,e,mid);
    }
}

// Print vector
void PrintVector(){

    unsigned int M=1000000007;

    unsigned int count=0;

    for (unsigned int i = 0; i < alpha.size() ; ++i) {
        cout<<alpha[i]<<" ";
        count+=alpha[i];
    }
    cout<<endl;

    cout<<count%M<<endl;

}

//Main function
int main(){

    unsigned int t;
    unsigned int M=1000000007;
    cin>>t;
    unsigned int a[t];
    for (unsigned int i = 0; i < t ; ++i) {
        cin>>a[i];
    }

    partition(a,0,t);
  //  PrintVector();
    cout<<c%M<<endl;
}