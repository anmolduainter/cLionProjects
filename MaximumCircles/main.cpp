#include <bits/stdc++.h>
using namespace std;

class Circle{
public:
    int sp;
    int ep;
    Circle(int sp,int ep) {
        this->sp = sp;
        this->ep = ep;
    }
};

int compare(Circle c1, Circle c2){
    return c1.ep<c2.ep;
}

void printVector(vector<Circle> v){
    for (int i = 0; i < v.size() ; ++i) {
        cout<<v[i].sp<<","<<v[i].ep<<endl;
    }
}

int countRemove(vector<Circle> v){

    int count=0;
    vector<Circle> output;
    output.push_back(v[0]);
    for (int i = 1; i < v.size() ; ++i) {
       if (output[output.size()-1].ep>v[i].sp){
           count++;
       }
        else{
           output.push_back(v[i]);
       }
    }
   // printVector(output);
    return count;
}

int main(){

    int numberofCircles;
    cin>>numberofCircles;

    vector<Circle> v;

    for (int i = 0; i < numberofCircles ; ++i) {
        int c,r;
        cin>>c>>r;
        v.push_back(Circle(c-r,c+r));
    }

    sort(v.begin(),v.end(),compare);

  //  printVector(v);

  //  cout<<"Count : " << countRemove(v)<<endl;

    cout<< countRemove(v)<<endl;

}