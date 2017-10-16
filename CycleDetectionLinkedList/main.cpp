#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};


bool search(Node*&head,int key){

    Node* temp=head;
    while(temp!=NULL){
      //  cout<<"search : "<<temp->data<<" ";
      //  cout<<endl;
        if (temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}


Node* getNode(Node* head,int d){
    Node* temp=head;
    while(temp->data!=d && temp!=NULL){
  //      cout<<"getNode :" <<temp->data<<" ";
  //      cout<<endl;
        temp=temp->next;
    }
    return temp;
}

bool Insert(Node*&head, int d, Node*&end){

    Node* n=new Node(d);
    if (head==NULL){
        head=n;
       // cout<<"Head : NULL "<<n->data<<endl;
        end=head;
        return false;
    }
    else{
        if (search(head,d)){
           // cout<<"True"<<endl;
            Node* temp=getNode(head,d);
            end->next=temp;
            return true;
        }
        else{
          Node* temp=head;
           while(temp->next!=NULL){
             //  cout<<temp->data<<" ";
             //  cout<<endl;
              temp=temp->next;
           }
           temp->next=n;
            end=n;
            return false;
        }
    }
}

vector<int> v;
void BuildTree(){

    Node* head=NULL;
    Node* end=NULL;
    int d;
    cin>>d;
    bool b=false;
    while(d!=-1){
        if (!b){
            v.push_back(d);
            b=Insert(head,d,end);
        }
        cin>>d;
    }
}

void PrintVector(){

    for (int i = 0; i < v.size()-1 ; ++i) {
        cout<<v[i]<<" ";
    }

    cout<<endl;

}

//main function
int main(){

    BuildTree();
    PrintVector();
    return 0;
}