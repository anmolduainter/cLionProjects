#include<bits/stdc++.h>

using namespace std;

//Count divisor
long long int countDivisor(long long int n){

    long long int count=0;

    for (long long int i = 1; i <= sqrt(n) ; ++i) {
        if (n%i==0){
            if (n/i==i){
                count++;
            }
            else{
                count=count+2;
            }
        }
    }
    return count;
}

vector<long long int> v;

void countDivisors(string a,string b){

    int count=0;
    for (int i =stoi(a);i<stoi(b);++i) {
        if (i<v.size()){
            if (v[i]==2){
                count++;
            }
        }
        else{
            long long int d=countDivisor(i);
            v.push_back(d);
            if (d==2){
                count++;
            }
        }
    }

    cout<<count<<endl;

}

int main(){

    unsigned int t;
    cin>>t;

    for (int i = 0; i < t ; ++i) {
        string a,b;
        cin>>a;
        cin>>b;
        countDivisors(a,b);
    }

}









