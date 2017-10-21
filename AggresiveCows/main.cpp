#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int a[],int s,int e,int n,int m){

    int mid=(s+e)>>1;
    int leftSub=a[mid]-a[s];
    int rightSub=a[e]-a[mid];

    if (leftSub>rightSub){
        int left=s;
        int right=mid;
        while(rightSub<=leftSub){
            mid=(left+right)>>1;
            leftSub=a[mid]-a[s];
            rightSub=a[e]-a[mid];
            right=mid;
        }
        return right;
    }

    else if (leftSub<rightSub){
        int left=mid;
        int right=e;
        while(leftSub<=rightSub){
            mid=(left+right)>>1;
            leftSub=a[mid]-a[s];
            rightSub=a[e]-a[mid];
            left=mid;
        }
        return left;
    }

    else{
        return mid;
    }

}

void AggresiveCows(int a[], int n, int c){

    if (c==2){
        cout<<a[n-1]-a[0]<<"\n";
        return;
    }

    int s=0;
    int e=n-1;
    int m=(a[0]+a[n-1])>>1;
    c=c-2;

    int a1;

    while(c>0){
        int pos=BinarySearch(a,s,e,n,m);
        if(a[pos]-a[s]>=a[e]-a[pos]){
            e=pos;
        } else{
            s=pos;
        }
        a1=pos;
        c--;
    }

    cout<<a1<<endl;
   // cout<<s;
}

void PrintArray(int a[],int n){
    for (int i = 0; i < n ; ++i) {
        cout<<a[i]<<" ";
    }
}

//Main function
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int c;

    cin>>n>>c;

    int a[n];

    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    sort(a,a+n-1);

    PrintArray(a,n);

    AggresiveCows(a,n,c);


}