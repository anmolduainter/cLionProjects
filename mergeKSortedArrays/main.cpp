#include<bits/stdc++.h>
using namespace std;

class Element{
public:
    int d;
    int i;
    int j;
    Element(int d,int i,int j){
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

void Sort(int a[][4]){

    priority_queue<Element,vector<Element>,Compare> p;
    for (int k = 0; k < 3 ; ++k) {
        p.push(Element(a[k][0],k,0));
    }
    for (int i = 0; i < 12 ; ++i) {
        Element e=p.top();
        cout<<p.top().d<<" ";
        p.pop();
        if (e.j+1>=4){
            p.push(Element(INT_MAX,e.i,e.j+1));
        }
        else{
            p.push(Element(a[e.i][e.j+1],e.i,e.j+1));
        }
    }

}

int main(){

    int arr[3][4] = { {1, 3, 5, 7},
                    {2, 4, 6, 8},
                    {0, 9, 10, 11}} ;

    Sort(arr);
    return 0;
}