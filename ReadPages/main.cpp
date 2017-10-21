#include<bits/stdc++.h>
using namespace std;

bool isPoss(vector<int> pages,int current_min)

void AssignPages(vector<int> pages,int numberOfBooks,int students){

    int s=0;
    int sum=0;
    for (int i = 0; i < pages.size() ; ++i) {
        sum+=pages[i];
    }
    int e=sum;
    while(s<=e){
        int mid=(s+e)>>1;

    }

}

//Main function
int main(){

    vector<int> pages;
    int numberOfBooks;
    int students;
    cin>>numberOfBooks>>students;
    for (int i = 0; i < numberOfBooks ; ++i) {
        int a;
        cin>>a;
        pages.push_back(a);
    }

}