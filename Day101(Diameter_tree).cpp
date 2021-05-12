/*
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. 
*/

// **********************************************************************************************************

int findDm(Node* root, int *height){
    int left_h = 0;
    int right_h = 0;
    
    int left_dm = 0;
    int right_dm = 0;
    
    if (root == NULL){
        *height = 0;
        return 0;
    }
    
    left_dm = findDm(root->left, &left_h);
    right_dm = findDm(root->right, &right_h);
    
    *height = max(left_h, right_h) + 1;
    
    return max(left_h+right_h+1, max(left_dm, right_dm));
    
}
    
    
int diameter(Node* root)
{
    int height = 0;
    int dm = findDm(root, &height);
    return dm;
}

