#include <bits/stdc++.h>

using namespace std;

class Node{
public:
    int d;
    Node* right;
    Node* left;
    Node* parent;
    Node(int d){
        this->d=d;
        left=NULL;
        right=NULL;
        parent=NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;
    if (d!=-1){
        Node* n=new Node(d);
        n->left=buildTree();
        n->right=buildTree();
        return n;
    }
    else{
        return NULL;
    }
}

Node* buildTreeLevelOrder(){

    int d;
    cin>>d;
    Node* root=new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* n= q.front();
        q.pop();

        int d1,d2;
        cin>>d1>>d2;

        if (d1!=-1){
            Node* n1=new Node(d1);
            n->left=n1;
            q.push(n1);
        }

        if (d2!=-1){
            Node* n2=new Node(d2);
            n->right=n2;
            q.push(n2);
        }

    }

    return root;

}

void PrintLeafNode(Node* root){
    if (root==NULL){
        return;
    }

    if (root->left==NULL && root->right==NULL){
        cout<<root->d<<" ";
        return;
    }
    PrintLeafNode(root->left);
    PrintLeafNode(root->right);
}

void PrintInorder(Node* root){

    if (root==NULL){
        return ;
    }

    PrintLeafNode(root->left);
    cout<<root->d<<" ";
    PrintLeafNode(root->right);
}

void PrintLevelOrder(Node* root){

    if (root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        if (temp==NULL){
            cout<<endl;
            q.pop();
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{

            q.pop();
            cout<<temp->d<<" ";

            if (temp->left){
                q.push(temp->left);
            }

            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}

void PrintAllWithoutSiblings(Node* root){

    if (root==NULL){
        return;
    }

    if (root->right!=NULL && root->left != NULL){
        PrintAllWithoutSiblings(root->left);
        PrintAllWithoutSiblings(root->right);
    }

    else if (root->right!=NULL){
        cout<<root->right->d<<" ";
        PrintAllWithoutSiblings(root->right);
    }

    else if (root->left!=NULL){
        cout<<root->left->d<<" ";
        PrintAllWithoutSiblings(root->left);
    }

}

//Removing All Leaf Nodes
Node* removingAllLeafNodes(Node* root){

    if (root==NULL){
        return NULL;
    }

    root->left=removingAllLeafNodes(root->left);
    root->right=removingAllLeafNodes(root->right);

    //Backtracking

    if (root->left==NULL && root->right==NULL){
        //free(root);
        return NULL;
    }
    else{
        return root;
    }
}

// Input True False
Node* InputTrueFalse(){

    int d;
    string l,r;
    cin>>d;
    Node* n=new Node(d);
    cin>>l;
    if (l=="true"){
          n->left=InputTrueFalse();
          n->left->parent=n;
    }
    cin>>r;
    if (r=="true"){
        n->right=InputTrueFalse();
        n->right->parent=n;
    }
    return n;
}

// Height of Tree
int heightOfTree(Node* root){

    //Base Case
    if (root==NULL){
        return 0;
    }

    int leftTree=heightOfTree(root->left);
    int rightTree=heightOfTree(root->right);
    return leftTree>rightTree ? leftTree+1 : rightTree+1;
}

// Printing ZigZag Recursive
void zigZagTraversal(Node* root,int level, bool b){

    if (root==NULL){
        return;
    }
    if (level==1){
        cout<<root->d<<" ";
    }
    else if (level>1){
        if (b){
            zigZagTraversal(root->right,level-1,b);
            zigZagTraversal(root->left,level-1,b);
        }
        else{
            zigZagTraversal(root->left,level-1,b);
            zigZagTraversal(root->right,level-1,b);
        }
    }
}

// Recursive Approach
void zigzagTraversal(Node* root) {

    int h=heightOfTree(root);
    //cout<<h<<endl;
    bool b=false;
    for(int i=1;i<=h;i++){
        zigZagTraversal(root,i,b);
        b=!b;
    }
}

Node* findLCA(Node* root,int n1,int n2){

    if (root==NULL){
        return NULL;
    }

    if (root->d==n1 || root->d==n2){
        return root;
    }

    Node* l=findLCA(root->left,n1,n2);
    Node* r=findLCA(root->right,n1,n2);

    if (l && r){
        return root;
    }

    return (l!=NULL?l:r);

}

// O(n^2) approach
int isBalanced(Node* root){

    if (root==NULL){
        return 1;
    }

    int l=heightOfTree(root->left);
    int r=heightOfTree(root->right);

    if (abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right)){
        return 1;
    }
    else{
        return 0;
    }
}



// Checking if tree is complete Tree or not

int count_nodes(Node* root){
    if (root==NULL){
        return 0;
    }
    return count_nodes(root->left)+count_nodes(root->right)+1;
}

bool isComplete(Node* root,int index,int number_nodes){

    if (root==NULL){
        return true;
    }
    if (index>=number_nodes){
        return false;
    }
    return isComplete(root->left,2*index+1,number_nodes) && isComplete(root->right,2*index+2,number_nodes);
}

//checking if binarytree is a heap(MAX)

bool isHeapHelper(Node* root){
    if (root->left==NULL && root->right==NULL){
        return true;
    }
    else if (root->right==NULL){
        return (root->d >= root->left->d);
    }
    else{
        if (root->d >= root->left->d && root->d >= root->right->d ){
            return isHeapHelper(root->left)&&isHeapHelper(root->right);
        }
        else{
            return false;
        }
    }
}

void isHeap(Node* root){
    if (root==NULL){
        cout<<"True"<<endl;
        return;
    }
    int number_of_nodes=count_nodes(root);
    if (isComplete(root,0,number_of_nodes) && isHeapHelper(root)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }
}

int main(){

    Node* root=buildTreeLevelOrder();

    isHeap(root);

    return 0;
}