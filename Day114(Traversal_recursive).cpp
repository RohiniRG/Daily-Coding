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


void Preorder(Node *root)
{
    if (!root) return;

    cout<<root->data<<" ";
    Preorder(root->left_child);
    Preorder(root->right_child);
}


void Inorder(Node *root)
{
    if (!root) return;

    Inorder(root->left_child);
    cout<<root->data<<" ";
    Inorder(root->right_child);
}


void Postorder(Node *root)
{
    if (!root) return;

    Postorder(root->left_child);
    Postorder(root->right_child);
    cout<<root->data<<" ";
}


int main()
{
    Node* root = new Node(1);
    root->left_child = new Node(2);
    root->right_child = new Node(3);
    root->left_child->left_child = new Node(4);
    root->left_child->right_child = new Node(5);
 
    cout << "\nPreorder traversal of binary tree is \n";
    Preorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    Inorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    Postorder(root);
 
    return 0;
}

