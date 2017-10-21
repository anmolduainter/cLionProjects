#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int d;
    Node* right;
    Node* left;
    Node(int d){
        this->d=d;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(){

    int d;
    cin>>d;
    queue<Node*> q;
    Node* n=new Node(d);
    q.push(n);

    while(!q.empty()){
        Node* root=q.front();
        q.pop();
        int d1,d2;
        cin>>d1>>d2;
        if (d1!=-1){
            Node* n=new Node(d1);
            root->left=n;
            q.push(n);
        }
        if (d2!=-1){
            Node* n=new Node(d2);
            root->right=n;
            q.push(n);
        }
    }
    return n;
}

void InOrder(Node* root){

    if (root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->d<<" ";
    InOrder(root->right);
}

int leftSub(Node* root){
    if (root==NULL){
        return 0;
    }
    return 1+leftSub(root->left);
}

int rightSub(Node* root){
    if (root==NULL){
        return 0;
    }
    return 1+rightSub(root->right);
}

unordered_map<int,Node*> m;

void TopView(Node* root,int level){

    if (root==NULL){
        return;
    }

    m[level]=root;

    TopView(root->left,level-1);
    TopView(root->right,level+1);
}

void PrintMap(Node* root){

    int start=0-leftSub(root);
    int end=rightSub(root)-0;

    while(start<=end){
        if (m.count(start)){
            cout<<m[start]->d<<" ";
        }
        start++;
    }

}

//Main function
int main(){

    Node* root=buildTree();
    TopView(root,0);
    PrintMap(root);

}