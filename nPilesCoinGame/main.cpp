#include<bits/stdc++.h>

using namespace std;

class Node{
    string a;
    string b;
    int n;
public:
    Node(){
        n=0;
    }
    string getName(){
        if(n==0){
            return "Charlie";
        }
        else{
            return "Alan";
        }
    }
    void setNum(int n){
        this->n=n;
    }
    int getNum(){
        return n;
    }
};

void PrintVector(vector<int> v){
    for (int i = 0; i < v.size() ; ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void choosePile(vector<int> v, int n1){

    srand(time(NULL));
    int s=n1;

    Node n;

    while(!v.empty()){
      //  PrintVector(v);
        int r=rand()%s;
        if (v[r]&1){
            v.erase(v.begin()+r);
            s--;
        }
        else{
           int nameNo=n.getNum();
            if(nameNo==0){
                n.setNum(1);
            }
            else{
                n.setNum(0);
            }
           int num=v[r]>>1;
           v.erase(v.begin()+r);
           if(num&1){
              s--;
           }
            else{
               v.push_back(num);
           }
        }
    }

    int nameNo=n.getNum();
    if(nameNo==0){
        n.setNum(1);
    }
    else{
        n.setNum(0);
    }

    cout<<n.getName()<<endl;
}

int main(){

    int t;
    cin>>t;

    for (int j = 0; j < t ; ++j) {
        vector<int> v;
        int n;
        cin>>n;

        for (int i = 0; i < n ; ++i) {
            int a;
            cin>>a;
            v.push_back(a);
        }

        choosePile(v,n);
    }

    return 0;

}