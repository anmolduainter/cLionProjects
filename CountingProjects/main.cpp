#include <iostream>

using namespace std;



void subArray(int array[],int N){

    int count=0;


    for (int i=0;i<N;i++){

        cout<<"AAaARRRAY : "<<array[i]<<endl;

        for (int j=i;j<N;j++){

            int sum=0;

            for (int k=i;k<=j;k++){

                cout<<"Array : " <<array[k]<<" "<<endl;

                sum=sum+array[k];

            }

            cout<<"Sum : " << sum<<endl;

            if (sum%N==0){
                count++;
            }

        }

    }

    cout<<"Count : " <<count<<endl;

}




int main(){


    int cases;

     cin>>cases;

    for (int i=0;i<cases;i++){

        int N;
        cin>>N;

        int *array=new int[N]();

        for (int j=0;j<N;j++){
            cin>>array[i];
        }


        subArray(array,N);


    }


}





