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


void zigzag(Node *root)
{
    stack <Node *> stk1;
    stack <Node *> stk2;

    stk1.push(root);
    while (!stk1.empty() || !stk2.empty()){
        
        while (!stk2.empty()){
            Node *temp = stk2.top();
            cout<<temp->data<<" ";
            stk2.pop();
            
            if (temp->right) stk1.push(temp->right);
            if (temp->left) stk1.push(temp->left);
        }
        
        while (!stk1.empty()){
            Node *temp = stk1.top();
            cout<<temp->data<<" ";
            stk1.pop();
            
            if (temp->left) stk2.push(temp->left);
            if (temp->right) stk2.push(temp->right);
        }
    }
}


int main()
{
    Node* root = new Node(7);
    root->left = new Node(9);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(8);
    root->right->left = new Node(6);
    root->left->left->right = new Node(10);
    root->left->left->right = new Node(9);
    
    cout<<"ZigZag: ";
    zigzag(root);
    cout<<endl;

    return 0;
}

