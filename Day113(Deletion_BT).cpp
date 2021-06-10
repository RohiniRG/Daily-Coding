/*
Given a binary tree, delete a node from it by making sure that tree shrinks from the bottom 
(i.e. the deleted node is replaced by bottom most and rightmost node). 
This is different from BST deletion. 
*/

#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left_child;
    Node *right_child;

    Node(int val)
    {
        data = val;
        left_child = NULL;
        right_child = NULL;
    }
};


void inorder(Node* temp)
{
    if (!temp)
        return;
    inorder(temp->left_child);
    cout << temp->data << " ";
    inorder(temp->right_child);
}


void deleteDeepest(Node* root, Node* deepest)
{
    queue <Node*> q;
    q.push(root);
 
    Node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp == deepest) {
            temp = NULL;
            delete deepest;
            return;
        }

        if (temp->right_child) {
            if (temp->right_child == deepest) {
                temp->right_child = NULL;
                delete deepest;
                return;
            }
            else
                q.push(temp->right_child);
        }
 
        if (temp->left_child) {
            if (temp->left_child == deepest) {
                temp->left_child = NULL;
                delete deepest;
                return;
            }
            else
                q.push(temp->left_child);
        }
    }
}


Node *deletion(Node *root, int value)
{
    if (root == NULL){
        return NULL;
    }
    if (root->left_child == NULL && root->right_child == NULL) {
        if (root->data == value) return NULL;
        else return root;
    }

    queue <Node*> q;
    q.push(root);
    Node *val_node;
    Node *deepest;

    while (!q.empty())
    {   
        deepest = q.front();
        q.pop();

        if (deepest->left_child) q.push(deepest->left_child);
        if (deepest->right_child) q.push(deepest->right_child);
        if (deepest->data == value) val_node = deepest;
    }
    if (val_node)
    {
        int new_val = deepest->data;
        deleteDeepest(root, deepest);
        val_node->data = new_val;
    }
    return root;   
}


int main()
{
    struct Node* root = new Node(10);
    root->left_child = new Node(11);
    root->left_child->left_child = new Node(7);
    root->left_child->right_child = new Node(12);
    root->right_child = new Node(9);
    root->right_child->left_child = new Node(15);
    root->right_child->right_child = new Node(8);
 
    cout << "Inorder traversal before deletion : "<<endl;
    inorder(root);
    cout<<endl;
 
    int key = 11;
    root = deletion(root, key);
 
    cout << "Inorder traversal after deletion : "<<endl;
    inorder(root);
    cout<<endl;
 
    return 0;
}

