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


int heightBT(Node *root)
{
    if (root == NULL) return 0;

    int l_height = heightBT(root->left);
    int r_height = heightBT(root->right);

    return max(l_height, r_height)+1;

}


main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int h = heightBT(root);
    cout<<"\nHeight of tree : "<<h<<endl;
}

