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


void postorder_rec(Node *root)
{
    if (root){     
        postorder_rec(root->left);
        postorder_rec(root->right);
        cout<<root->data<<" ";   
    }
    return;
}


void postorder_iter(Node *root)
{
    stack <Node *> i_stk;
    stack <int> o_stk;

    
    i_stk.push(root);

    while (!i_stk.empty())
    {
        Node *curr = i_stk.top();
        i_stk.pop();
        o_stk.push(curr->data);

        if (curr->left){
            i_stk.push(curr->left);
            // curr = curr->left;
        }
        if (curr->right){
            i_stk.push(curr->right);
            // curr = curr->right;
        }
    }

    while (!o_stk.empty())
    {
        cout<<o_stk.top()<<" ";
        o_stk.pop();
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
    
    cout<<"\npostorder Iterative: ";
    postorder_iter(root);
    cout<<endl;
    cout<<"Postorder Recursive: ";
    postorder_rec(root);
    cout<<endl;
}

