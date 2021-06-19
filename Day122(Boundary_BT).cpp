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

void printLeaves(struct Node* root, vector <int> &res)
{
    if (root == NULL)
        return;

    printLeaves(root->left, res);

    if (!(root->left) && !(root->right))
        res.push_back (root->data);

    printLeaves(root->right, res);
}


void printBoundaryLeft(struct Node* root, vector <int> &res)
{
    if (root == NULL)
        return;

    if (root->left) {

        res.push_back (root->data);
        printBoundaryLeft(root->left, res);
    }
    else if (root->right) {
        res.push_back (root->data);
        printBoundaryLeft(root->right, res);
    }

}


void printBoundaryRight(struct Node* root, vector <int> &res)
{
    if (root == NULL)
        return;

    if (root->right) {
        // to ensure bottom up order, first call for right
        // subtree, then print this node
        printBoundaryRight(root->right, res);
        res.push_back (root->data);
    }
    else if (root->left) {
        printBoundaryRight(root->left, res);
        res.push_back (root->data);
    }

}


vector <int> printBoundary(struct Node* root)
{
    vector <int> res;
    if (root == NULL)
        return res;

    res.push_back (root->data);

    printBoundaryLeft(root->left, res);

    // Print all leaf nodes
    printLeaves(root->left, res);
    printLeaves(root->right, res);

    printBoundaryRight(root->right, res);
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
    root->left->left->right = new Node(8);
    
    vector <int> v2 = printBoundary(root);

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    return 0;
}

