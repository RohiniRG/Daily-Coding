/*
Given a Binary Tree of size N , You have to count leaves in it. 
For example, there are two leaves in following tree

        1
     /      \
   10      39
  /
5
*/

// **********************************************************************************************************
 
int countLeaves(Node* root)
{
  Node *curr = root;
  if (curr == NULL) return 0;
  
  if (curr->left == NULL && curr->right == NULL)
  {
      return 1;
  }
  return countLeaves(curr->left) + countLeaves(curr->right);
}

