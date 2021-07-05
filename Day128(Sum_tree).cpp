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


int sumTree(Node* root) 
{
    if (root == NULL) return 0;
    
    int l_sum = sumTree(root->left);
    int r_sum = sumTree(root->right);
    
    if (l_sum==0 && r_sum==0)
    {
        return root->data;
    }

    if (l_sum + r_sum == root->data) 
    {
        return root->data + l_sum + r_sum;
    }
    else 
    {
        return 0;
    }
        
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


bool isSumTree(Node* root)
{
    int sum = sumTree(root);
    
    if (sum / 2 == root->data) return true;
    
    return false;
}


int main() {
    Node* root = new Node(180);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(20);
    root->left->right = new Node(20);
    root->right->left = new Node(25);
    root->right->right = new Node(25);
    
    cout<<"Is Sum Tree: "<<isSumTree(root)<<endl;
    return 0;
}

