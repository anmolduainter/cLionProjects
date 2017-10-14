#include <bits/stdc++.h>
#include <sstream>

using namespace std;

bool isPrime(unsigned int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}

void func1(string s){

    unsigned int count=0;
    unsigned int max_so_far=0;
    unsigned int i=0;

     while(i<s.length()){
        if (isdigit(s[i])){
            unsigned int j=i;
            string s1;
            while(isdigit(s[j])){
                s1+=s[j];
                j++;
            }
           // cout<<"s1 :"<<s1<<endl;
            i=i+s1.length();
            unsigned int number= (unsigned int) stoi(s1);
           // cout<<"digit : " <<s[i]<<endl;
            if (isPrime(number)){
                count++;
             //   cout<<"Count : "<<count<<endl;
                if(max_so_far<(number)){
                    max_so_far=(number);
                }
              //  cout<<"Max so far : "<<max_so_far<<endl;
            }
        }
         else{
            i++;
        }
    }

    if (count!=0){
        cout<<count<<" "<<max_so_far<<"\n";
    }
    else{
        cout<<"-1"<<"\n";
    }

}

//Main function
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    for (int i = 0; i < t ; ++i) {
        string s;
        cin>>s;
        func1(s);
    }

}