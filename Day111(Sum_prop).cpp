/*
Given a binary tree, write a function that returns true if the tree satisfies below property.
For every node, data value must be equal to sum of data values in left and right children. 
Consider data value as 0 for NULL children. 
*/

int isSumProperty(struct node* node)
{
    int left_data = 0, right_data = 0;
      
    if(node == NULL ||
        (node->left == NULL && 
         node->right == NULL))
        return 1;
    else
    {
        if(node->left != NULL)
        left_data = node->left->data;

        if(node->right != NULL)
        right_data = node->right->data;
      
        if((node->data == left_data + right_data)&&
            isSumProperty(node->left) &&
            isSumProperty(node->right))
        return 1;
        else
        return 0;
    }
}

