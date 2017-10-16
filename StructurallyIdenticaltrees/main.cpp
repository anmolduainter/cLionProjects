#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* BuildTree(){

    int d;
    cin>>d;
    string sl,sr;
    Node* n=new Node(d);

    cin>>sl;
    if (sl=="true"){
        n->left=BuildTree();
    }

    cin>>sr;
    if (sr=="true"){
        n->right=BuildTree();
    }

    return n;
}

void PreOrder(Node* root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

bool StructuralIdentical(Node* root1,Node* root2){

    if (root1==NULL && root2==NULL){
        return true;
    }

    if (root1==NULL||root2==NULL){
        return false;
    }

    if (root1->data==root2->data){
        return true;
    }

    return false || (StructuralIdentical(root1->left,root2->left) && StructuralIdentical(root1->right,root2->right));
}

int main(){

    Node* root1= BuildTree();
    Node* root2=BuildTree();

//    cout<<"ROOT1"<<endl;
//    PreOrder(root1);
//
//    cout<<endl;
//
//    cout<<"ROOT2"<<endl;
//    PreOrder(root2);
//
//    cout<<endl;

    if (StructuralIdentical(root1,root2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}