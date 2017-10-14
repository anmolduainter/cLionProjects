#include <iostream>

using namespace std;
//
//void CountingSort(int a[],int n){
//
//    int count[10]={0};
//
//    int output[n];
//
//    for (int i = 0; i < n ; ++i) {
//        count[a[i]]++;
//    }
//
//    for (int j = 1; j <= n ; ++j) {
//        count[j]+=count[j-1];
//    }
//
//    for (int k = 0; k<n ; ++k) {
//        output[count[a[k]]-1]=a[k];
//        count[a[k]]--;
//    }
//
//    for (int l = 0; l<n ; ++l) {
//        a[l]=output[l];
//    }
//
//}

const int BUCKET_K = 10;

void countingsort(int* input,int n)
{
    int CountArr[BUCKET_K] = { 0 };

    for (int i=0;i<n;i++)
    {
        CountArr[input[i]]++;
    }

    int outputindex=0;
    for (int j=0;j<BUCKET_K;j++)
    {
        while (CountArr[j]--)
            input[outputindex++] = j;
    }

}

int main() {

    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }

    countingsort(a,n);

    for (int j = 0; j < n ; ++j) {
        cout<<a[j]<<" ";
    }

}