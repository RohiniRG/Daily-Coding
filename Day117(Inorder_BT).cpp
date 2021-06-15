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


void inorder_rec(Node *root)
{
    if (root){
        inorder_rec(root->left);
        cout<<root->data<<" ";
        inorder_rec(root->right);
    }
    return;
}


void inorder_iter(Node *root)
{
    stack <Node *> stk;
    Node *curr = root;
    while (!stk.empty() || curr)
    {
        if (curr){
            stk.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = stk.top();
            cout<<curr->data<<" ";
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
    
    cout<<"\nInorder Iterative: ";
    inorder_iter(root);
    cout<<endl;
    cout<<"Inorder Recursive: ";
    inorder_rec(root);
    cout<<endl;
}

