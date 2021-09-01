#include <bits/stdc++.h>
 
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *newNode(int item)
{
    Node *temp = new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}


Node* insert(Node* node, int data)
{
    if (node == NULL) return newNode(data);
 
    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
 
    return node;
}


vector <int> desc;
vector <int> descBST(Node *curr)
{
    if (curr) {
        descBST(curr->right);
        desc.push_back(curr->data);
        descBST(curr->left);
    }
    
    return desc;
}
    
int kthLargest(Node *root, int K)
{
    Node *curr = root;
    vector <int> v = descBST(curr);
    return v[K-1];
}

int main()
{
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    int c = 0;
    for (int k=1; k<=7; k++)
        cout<<"The Kth largest element is "<<kthLargest(root, k)<<endl;
 
    return 0;
}

