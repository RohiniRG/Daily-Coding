/*
Given a binary tree and an integer S, check whether there is root to leaf path with its sum as S.
*/

bool hasPathSum(Node *root, int S) {
    if (root == NULL)
    {
        return (S == 0);
    }
        
    else
    {
        bool ans = 0;
        
        int subSum = S - root->data;
        
        if ( subSum == 0 && root->left == NULL && root->right == NULL ) return 1;
            
        if(root->left)
            ans = ans || hasPathSum(root->left, subSum);
        if(root->right)
            ans = ans || hasPathSum(root->right, subSum);
        
        return ans;
    }
}