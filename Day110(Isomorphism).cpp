/*
Write a function to detect if two trees are isomorphic. 
Two trees are called isomorphic if one of them can be obtained from other by a series of flips, 
i.e. by swapping left and right children of a number of nodes. 
Any number of nodes at any level can have their children swapped. 
Two empty trees are isomorphic.
*/

bool isIsomorphic(node* n1, node *n2)
{
 if (n1 == NULL && n2 == NULL)
    return true;
  
 if (n1 == NULL || n2 == NULL)
    return false;
  
 if (n1->data != n2->data)
    return false;

 return 
 (isIsomorphic(n1->left,n2->left) && isIsomorphic(n1->right,n2->right))||
 (isIsomorphic(n1->left,n2->right) && isIsomorphic(n1->right,n2->left));
}
  
