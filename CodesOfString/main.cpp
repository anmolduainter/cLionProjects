#include <bits/stdc++.h>

using namespace std;

vector<string> l;
//
//void PrintCodes(char input[],int i,char output[],int j,int n){
//
//    //Base Case
//    if (i==n){
//        output[j]='\0';
//        string s(output);
//        l.push_back(s);
//        //cout<<output<<endl;
//        return;
//    }
//
//    //Double Double
//    if (i<n-1){
//
//        int no=(input[i]-'0')*10+(input[i+1]-'0');
//        if (no<26){
//           output[j]=char('a'+no-1);
//            PrintCodes(input,i+2,output,j+1,n);
//        }
//    }
//
//    //single single
//    if ((input[i]-'0')>=1){
//
//        output[j]=char('a'+input[j]-'0'-1);
//        PrintCodes(input,i+1,output,j+1,n);
//
//    }
//
//}


void interpretations(char a[], char s[], int i, int k, int na)
{
    if(i==na)
    {
        s[k]='\0';

        string s1(s);

        l.push_back(s1);

        return;
    }

    if(i<na-1)
    {
        int offset=(a[i]-'0')*10 + (a[i+1]-'0');
        if(offset<=26)
        {
            s[k]=char('a'+ offset-1);
            interpretations(a, s, i+2, k+1, na);
        }
    }

    if(a[i]-'0'>=1)
    {
        s[k]=char('a'+a[i]-'0'-1);
        interpretations(a, s, i+1, k+1, na);
    }
}


int main(){

    int a=0;
    char input[100],output[100];
    cin>>input;

    for(int i=0;input[i]!='\0';i++)
        a++;

    interpretations(input,output,0,0,a);

    reverse(l.begin(),l.end());

    for (int i = 0; i < l.size() ; ++i) {

        if (i==0){
            cout<<"[";
        }

        if (i<l.size()-1){
            cout<<l[i]<<","<<" ";
        }

        else if (i==l.size()-1){
            cout<<l[i]<<"]";
        }
    }

}