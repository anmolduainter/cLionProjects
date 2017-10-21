    #include<bits/stdc++.h>

    using namespace std;

    class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node* parent;
        Node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
            parent=NULL;
        }
    };

    Node* buildTree(){
        int d;
        cin>>d;
        Node* root=new Node(d);
        string sL,sR;
        cin>>sL;
        if (sL=="true"){
            root->left=buildTree();
            root->left->parent=root;
        }
        cin>>sR;
        if (sR=="true"){
            root->right=buildTree();
            root->right->parent=root;
        }
        return root;
    }

    vector<string> v;

    string PrintPreOrder(Node* root){
        if (root==NULL){
            return "END";
        }
        string sR=PrintPreOrder(root->right);
        string sL=PrintPreOrder(root->left);
        string s=to_string(root->data);
        string out=sL + " => " + s + " <= " + sR;
        v.push_back(out);
        // cout<<out<<endl
        return s;
    }


    void printVector(){
        for (int i = 0; i < v.size() ; ++i) {
            cout<<v[v.size()-1-i]<<endl;
        }
    }

    void RemoveLeaves(Node* root){

        if (root==NULL){
            return;
        }

        if (root->left==NULL && root->right==NULL){
            if(root->parent->left==root){
                root->parent->left=NULL;
            }
            if (root->parent->right==root){
                root->parent->right=NULL;
            }
        }

        RemoveLeaves(root->left);
        RemoveLeaves(root->right);
    }

    //Main Function
    int main(){

        Node* root=buildTree();
       // PrintPreOrder(root);
        cout<<endl;
        RemoveLeaves(root);
       // Print(root);
        PrintPreOrder(root);
        printVector();

    }