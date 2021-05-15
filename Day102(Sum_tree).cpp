/*
Given a Binary Tree. Check whether it is a Sum Tree or not.

A Binary Tree is a Sum Tree in which value of each node x is equal to sum of nodes present in its left subtree and right subtree . 
An empty tree is also a Sum Tree as sum of an empty tree can be considered to be 0. A leaf node is also considered as a Sum Tree.
*/

// **********************************************************************************************************

bool isLeaf(Node *root){
    if (root == NULL) return 0;
    
    if (root->left == NULL && root->right == NULL) return 1;
    
    return 0;
}

bool isSumTree(Node* root)
{
    int ls;
    int rs;
    
    if (root==NULL || isLeaf(root)) return 1;
    
    if (isSumTree(root->left) && isSumTree(root->right)){
        if (root->left == NULL) ls = 0;
        else if (isLeaf(root->left)) ls = root->left->data;
        else ls = 2*(root->left->data);
        
        if (root->right == NULL) rs = 0;
        else if (isLeaf(root->right)) rs = root->right->data;
        else rs = 2*(root->right->data);
        
        return (root->data == ls+rs);
    }
    return 0;
}

