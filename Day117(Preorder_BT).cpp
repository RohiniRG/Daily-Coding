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


void preorder_rec(Node *root)
{
    if (root){
        cout<<root->data<<" ";        
        preorder_rec(root->left);
        preorder_rec(root->right);
    }
    return;
}


void preorder_iter(Node *root)
{
    stack <Node *> stk;
    Node *curr = root;
    while (!stk.empty() || curr)
    {
        if (curr){
            stk.push(curr);
            cout<<curr->data<<" ";
            curr = curr->left;
        }
        else
        {
            curr = stk.top();
            stk.pop();
            curr = curr->right;
        }
    }
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<"\nPreorder Iterative: ";
    preorder_iter(root);
    cout<<endl;
    cout<<"Preorder Recursive: ";
    preorder_rec(root);
    cout<<endl;
}

