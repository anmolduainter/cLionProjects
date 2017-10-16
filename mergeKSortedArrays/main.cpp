#include<bits/stdc++.h>
using namespace std;

unsigned int col,row;

class Element{
public:
    unsigned int d;
    unsigned int i;
    unsigned int j;
    Element(unsigned int d,unsigned int i,unsigned int j){
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

void Sort(unsigned int a[][250]){

    priority_queue<Element,vector<Element>,Compare> p;
    for (unsigned int k = 0; k < row ; ++k) {
        p.push(Element(a[k][0],k,0));
    }
    for (unsigned int i = 0; i < (col*row) ; ++i) {
        Element e=p.top();
        cout<<p.top().d<<" ";
        p.pop();
        if (e.j+1>=col){
            p.push(Element(INT_MAX,e.i,e.j+1));
        }
        else{
            p.push(Element(a[e.i][e.j+1],e.i,e.j+1));
        }
    }

}

int main(){

    cin>>row>>col;

    unsigned int a[row][250];

    for (unsigned int i = 0; i < row ; ++i) {
        for (unsigned int j = 0; j < col ; ++j) {
            cin>>a[i][j];
        }
    }

    Sort(a);
    return 0;
}