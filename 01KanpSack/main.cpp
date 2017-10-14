#include <iostream>
#include <vector>

using namespace std;
//
//void Root(int s,int e,int no){
//
//    int mid=(s+e)/2;
//
//    if (s>=e){
//        cout<<mid;
//        return;
//    }
//
//    if ((mid*mid)>no){
//        e=mid;
//        Root(s,e,no);
//    }
//
//    else if ((mid*mid)<no){
//        s=mid;
//       Root(s,e,no);
//    }
//    else{
//       cout<<mid;
//        return;
//    }
//
//}


int Root(int n){

    //start
    int s=1;
    //end
    int e=n;

    int ans;

    while(s<=e){

        int mid=(s+e)>>1;

        if ((mid*mid)==n){
            return mid;
        }

        if ((mid*mid)>n){
            e=mid-1;
        }
        else if ((mid*mid)<n){
            s=mid+1;
            ans=mid;
        }
    }

    return ans;

}


int main() {

    int n;
     cin>>n;

    vector<int> v;

    for (int i = 0; i < n ; ++i) {

        int a;
        cin>>a;
        v.push_back(a);
    }

    for (int j = 0; j < n ; ++j) {
        cout<<Root(v[j])<<endl;
    }

    return 0;
}