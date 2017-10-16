#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void InsertIntoNode(Node*&head,int d){

    Node* n=new Node(d);
    if (head==NULL){
        head=n;
    }
    else{
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}

void PrintList(Node* head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

void deleteFromList(int pos,Node*&head){

    if (head==NULL){
        return;
    }
    else{
        if (pos==0){
            head=head->next;
        }
        else{
            Node*prev=NULL;
            Node*temp=head;
            for (int i = 0; i < pos ; ++i) {
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
        }
    }
}

int main(){

    int t,q;
    cin>>t>>q;
    Node* head=NULL;
    for (int i = 0; i < t ; ++i) {
        int a;
        cin>>a;
       InsertIntoNode(head,a);
    }

//    PrintList(head);
//
//    cout<<endl;

    for (int j = 0; j < q ; ++j) {
        int a;
        cin>>a;
        deleteFromList(a,head);
        PrintList(head);
    }
}