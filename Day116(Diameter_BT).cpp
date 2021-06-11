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

int max_d = 0;
int find_diameter(Node *root)
{
    if (root == NULL) return 0;

    int l_height = find_diameter(root->left);
    int r_height = find_diameter(root->right);

    int diameter = l_height + r_height + 1;
    if (diameter > max_d) max_d = diameter; 
    return max(l_height, r_height)+1;
}


int diameter(Node *root){
    int h = find_diameter(root);
    return max_d;
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int d = diameter(root);
    cout<<"\nDiameter of tree : "<<d<<endl;
}

