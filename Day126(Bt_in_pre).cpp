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


int linear_search(int in[], int key, int start_i, int end_i)
{
    for (int i = start_i; i <= end_i; i++)
    {
        if (in[i] == key) return i;
    }
    return -1;
}


int pre_index = 0;
Node *split(int start_i, int end_i, int pre_index, int in[], int pre[])
{
    if (start_i > end_i)
    {
        return NULL;
    }

    Node *root = new Node(pre[pre_index]);

    if (start_i == end_i)
        return root;

    int in_index = linear_search(in, pre[pre_index], start_i, end_i);

    pre_index++;
    if (in_index != -1)
    {
        root->left = split(start_i, in_index-1, pre_index, in, pre);
        root->right = split(in_index+1, end_i, pre_index, in, pre);
    }

    return root;
}


Node* buildTree(int in[],int pre[], int n)
{
    int start_i = 0;
    int end_i = n-1;
    Node *root = split(start_i, end_i, pre_index, in, pre);

    return root;
}


int main()
{
    int N = 4;
    int inorder[] = {1, 6, 8, 7};
    int preorder[] = {1, 6, 7, 8};

    Node* root = buildTree(inorder, preorder, N);
    postorder_rec(root);

    return 0;
}

