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

vector<vector<int>> v;

void printLevelOrder(Node* root){

    if (root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    vector<int> v1;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp!=NULL){
            v1.push_back(temp->data);
            //cout<<temp->data;
            if (temp->left!=NULL){
                q.push(temp->left);
            }
            if (temp->right!=NULL){
                q.push(temp->right);
            }
        }
        else{
           // cout<<endl;
            v.push_back(v1);
            v1.clear();
            if (!q.empty()){
                q.push(NULL);
            }
        }
    }
}

void Printvector(){

    cout<<"[";
    for (int i = 0; i < v.size() ; ++i) {
        cout<<"[";
        for (int j = 0; j < v[i].size() ; ++j) {
            cout<<v[i][j];
            if (j<v[i].size()-1){
                cout<<", ";
            }
        }
        cout<<"]";
        if (i<v.size()-1){
            cout<<", ";
        }
    }
    cout<<"]";
}

int main(){

    Node* root=BuildTree();
   // PreOrder(root);
  //  cout<<endl;
    printLevelOrder(root);
    Printvector();
    return 0;
}