#include <bits/stdc++.h>

using namespace std;

class Cook{
public:
    int Rank;
    int time;
    int a;
    Cook(int Rank,int time,int a=1){
        this->Rank=Rank;
        this->time=time;
        this->a=a;
    }
    void setTime(int time){
        this->time=time;
    }
    int getTime(){
        return time;
    }
    void seta(int a){
        this->a=a;
    }
    int geta() {
        return a;
    }
    int getRank() {
        return Rank;
    }

};

void TimeCalculate(vector<Cook> v,int parathas){

    int time=0;

    while(parathas>0){
        for (int i = 0; i < v.size() ; ++i) {
            if (v[i].time==1){
                parathas--;
                v[i].setTime(v[i].getRank() * (v[i].geta() + 1));
                v[i].seta(v[i].geta()+1);
            }
            else{
               v[i].setTime(v[i].getTime()-1);
            }
        }
        time++;
    }

    cout<<time<<endl;
}

//Main function
int main(){

    vector<Cook> v;
    int p;
    int c;
    cin>>p;
    cin>>c;

    for (int i = 0; i < c ; ++i) {
        int r;
        cin>>r;
        Cook c1(r,r);
        v.push_back(c1);
    }

    TimeCalculate(v,p);

}