#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(){

    int total;

    vector<int> v;

    cin>>total;

    for (int i = 0; i < total ; ++i) {

        string s;

        int result=0;

        cin>>s;

        for (int j = 1; j <= s.length() ; ++j) {

            result=result+(stoi(s.substr(s.length()-j,1)) * pow(2, j-1));

        }

       v.push_back(result);

    }


    for (int i = 0; i < v.size() ; ++i) {

        cout<<v[i]<<endl;

    }


}