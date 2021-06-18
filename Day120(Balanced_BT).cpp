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


int balanced_util(Node *root, int &flag)
{
    if (root == NULL) return 0;
    
    int l_height = balanced_util(root->left, flag);
    int r_height = balanced_util(root->right, flag);

    if (abs(l_height-r_height) > 1)
    {
        flag = -1;
        return flag;
    } 
    else return max(l_height, r_height) + 1;
}


bool balanced(Node *root)
{   
    int flag = 1;
    int n = balanced_util(root, flag);

    if (flag<1) return 0;
    return 1;
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
    
    if (balanced(root))
    {
        cout<<"Balanced!";
    }
    else cout<<"Imbalanced!";
    cout<<endl;

    return 0;
}

