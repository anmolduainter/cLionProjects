#include<bits/stdc++.h>
using namespace std;

long long int col,row;

class Element{
public:
    long long  int d;
    long long  int i;
    long long  int j;
    Element(long long  int d,long long int i,long long int j){
        this->d=d;
        this->i=i;
        this->j=j;
    }
};

class Compare{
public:
    bool operator()(Element &e1,Element &e2){
        return e1.d>e2.d;
    }
};

void Sort(vector<vector<long long int>> a){

    priority_queue<Element,vector<Element>,Compare> p;
    for (long long int k = 0; k < row ; ++k) {
        p.push(Element(a[k][0],k,0));
    }
    for (long long int i = 0; i < (col*row) ; ++i) {
        Element e=p.top();
        cout<<p.top().d<<" ";
        p.pop();
        if (e.j+1>=col){
            p.push(Element(INT64_MAX,e.i,e.j+1));
        }
        else{
            p.push(Element(a[e.i][e.j+1],e.i,e.j+1));
        }
    }

}

int main(){

    cin>>row>>col;


    vector<vector<long long int>> v;

    for (long long int i = 0; i < row ; ++i) {
        vector<long long int> v1;
        for (long long int j = 0; j < col ; ++j) {
            long long int a;
            cin>>a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }

    Sort(v);
    return 0;
}