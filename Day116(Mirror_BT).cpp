#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


void inorder(Node* temp)
{
    if (!temp)
        return;
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}


void mirror(Node *root)
{
    Node *temp; 
    if (root->left) mirror (root->left);
    if (root->right) mirror (root->right);
    temp = root->right;
    root->right = root->left;
    root->left = temp;
}


int main()
{
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);

    cout<<"Inorder of given tree: ";
    inorder(root);

    mirror(root);
    cout<<"\n\nInorder of new tree: ";
    inorder(root);
    cout<<"\n";
}

