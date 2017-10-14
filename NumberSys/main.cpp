#include<bits/stdc++.h>

using namespace std;

// log n
int power(int a,int b){
    if(b==0){
        return 1;
    }
    int value = power(a,b/2);
    value = value*value;

    if(b&1){
        return a*value;
    }
    return value;
}

int val(char c){
    if (c>='0' && c<='9'){
        return (int)c-'0';
    }
    else{
        return (int)c-'A'+10;
    }
}

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

void numberSystem(int a,int b,string no){

    int count=0;

    for (int i = 0; i < no.length() ; ++i) {
        count+=(power(a,(no.length()-1-i))*val(no[i]));
       // cout<<count<<endl;
    }

    if (b==10){
        cout<<count<<endl;
    }
    else{

        int index=0;
        char out[1000];

        while(count>0){
            out[index]=reVal(count%b);
            count/=b;
           // cout<<s[index]<<endl;
            index++;
        }

       // cout<<s[1]<<endl;
        out[index]='\0';

        string s(out);

        reverse(s.begin(),s.end());

        cout<<s;


    }

}

int main(){

    int a;
    int b;
    string s;
    cin>>a;
    cin>>b;
    cin>>s;
    numberSystem(a,b,s);


}