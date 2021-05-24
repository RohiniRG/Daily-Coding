/*
Given a binary tree and a key, insert the key into the binary tree at the first position available in level order.
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


Node *insert_LO(Node *root, int val) 
{
    Node *newnode = new Node(val);

    if (root == NULL) 
    {
        root = newnode;
        return root;
    }

    queue <Node*> q;
    q.push(root);
    while (!q.empty() )
    {
        Node *par = q.front();
        q.pop();
        if (par->left_child) 
        {
            q.push(par->left_child);
        }
        else
        {
            par->left_child = newnode;
            return root;
        }
        
        
        if (par->right_child) 
        {
            q.push(par->right_child);
        }
        else
        {
            par->right_child = newnode;
            return root;
        }
        
    }
    
}


void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left_child);
    cout << temp->data << ' ';
    inorder(temp->right_child);
}
 

int main(){
    Node* root = new Node(10);
    root->left_child = new Node(11);
    root->left_child->left_child = new Node(7);
    root->right_child = new Node(9);
    root->right_child->left_child = new Node(15);
    root->right_child->right_child = new Node(8);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    int key ;
    cout<<"Enter value to insert: ";
    cin>>key;
    root = insert_LO(root, key);
 
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
}

