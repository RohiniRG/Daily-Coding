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


int BTtoST(Node *root)
{
    if (!root) return 0;

    int temp = root->data;

    int sum_l = BTtoST(root->left);
    int sum_r = BTtoST(root->right);

    root->data = sum_r + sum_l;

    return root->data + temp;
}


void SumTree(Node *root)
{
    int sum = BTtoST(root);
}


void inorder(Node *root)
{
    if (root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    return;
}


int main()
{
    Node* root = new Node(10);
    root->left = new Node(-2);
    root->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(-4);
    root->right->left = new Node(7);
    root->right->right = new Node(5);

    cout<<"Actual: ";
    inorder(root);
    cout<<endl;
    
    SumTree(root);
    
    cout<<"Sum Tree: ";
    inorder(root);
    cout<<endl;

    return 0;
}

