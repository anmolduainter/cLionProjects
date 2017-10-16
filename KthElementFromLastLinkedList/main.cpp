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

Node* InsertIntoList(Node* head,int a){
    Node* n=new Node(a);
    n->next=head;
    head=n;
    return head;
}

Node* buildList(){

    int d;
    Node* root=NULL;
    cin>>d;
    while(d!=-1){
        root=InsertIntoList(root,d);
        cin>>d;
    }
    return root;
}

void printList(Node* head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void KthFind(Node* head,int t){

    if (head==NULL){
        return;
    }

    Node* temp=head;
    for (int i = 0; i < t-1 ; ++i) {
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

//main func
int main(){

    Node* head=NULL;
    head=buildList();
//    cout<<"PrintingList"<<endl;
//    printList(head);
//    cout<<endl;
    int t;
    cin>>t;
    KthFind(head,t);
}