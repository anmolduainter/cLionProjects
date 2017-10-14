#include <bits/stdc++.h>

using namespace std;

int SuperDigit(int a){

    int sum=0;

    int num=a;

    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    if (sum==a){
        return sum;
    }

    else{
      SuperDigit(sum);
    }

}

int main(){

    int a;
    int b;

    cin>>a;
    cin>>b;

    int sum=0;

    int num=a;

    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    cout<<SuperDigit(sum*b);


    return 0;
}