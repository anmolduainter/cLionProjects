//
// Created by anmol on 8/7/17.
//

#ifndef FIRST_BST_H
#define FIRST_BST_H

#include<iostream>
#include <queue>
using namespace std;
class Node {

public:
    int data;
    Node *left;
    Node *right;


    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }


    Node *insertIntoBst(Node *root, int data) {

        if (root == NULL) {

            Node *temp = new Node(data);
            return temp;
        } else if (root->data > data) {

            root->left = insertIntoBst(root->left, data);
            return root;
        } else {

            root->right = insertIntoBst(root->right, data);
            return root;
        }


    }


    Node *takeInput() {

        int n;
        Node *root = NULL;

        while (cin >> n && n != -1) {
            root = insertIntoBst(root, n);
        }

        return root;

    }


    void inorder(Node *root) {

        if (root == NULL) {
            return;
        } else {
            inorder(root->left);
            cout << " " << root->data << " ";
            inorder(root->right);
        }

    }

    void printLevel(Node *root) {

        queue<Node *> q;

        q.push(root);
        q.push(NULL);

        while (q.empty() == false) {

            Node *cur = q.front();
            q.pop();

            if (cur == NULL) {

                while (!q.empty()) {

                    q.push(NULL);

                }

                continue;

            }

            cout << cur->data;
            if (cur->left) printLevel(cur->left);
            if (cur->right) printLevel(cur->right);

        }

    }

};



#endif //FIRST_BST_H
