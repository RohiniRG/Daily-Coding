/*
Given a Binary Tree, find Right view of it. 
Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

Right view of following tree is 1 3 7 8.

          1
       /     \
     2        3
   /   \      /    \
  4     5   6    7
    \
     8

*/
// **********************************************************************************************************

vector<int> rightView(Node *root)
{
    queue<Node*> q;
    q.push(root);
    
    vector <int> v;
    
    if(root==NULL){return v;} 

    while (!q.empty())
    {    
        int n = q.size();
            
        for(int i = 1; i <= n; i++)
        {
            Node* temp = q.front();
            q.pop();
            
            if (i == n)
                v.push_back(temp->data);
            
            if (temp->left != NULL)
                q.push(temp->left);
                    
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return v;
}

