/*
Given a Binary Tree with all unique values and two nodes value n1 and n2. 
The task is to find the lowest common ancestor of the given two nodes. 
We may assume that either both n1 and n2 are present in the tree or none of them is present. 
*/

Node* lca(Node* root ,int n1 ,int n2 )
{
    // root is NULL (works for nodes after leaf)
    if (root == NULL) return NULL;
    
    // if root's data is equak to either, we return the root itself 
    // (acts as a recursion breaking condition)
    if (root->data == n1 || root->data == n2) return root;
    
    // finding the lcs for left and right subtrees
    Node *left_tree_lca = lca(root->left, n1, n2);
    Node *right_tree_lca = lca(root->right, n1, n2);
        
    // If both left and right subtrees have a lca, then root itself was its ancestor
    if (left_tree_lca && right_tree_lca) return root;
    
    // If either subtrees have NULL lca, then we return the one which exists
    if (left_tree_lca) return left_tree_lca;
    return right_tree_lca;
}

