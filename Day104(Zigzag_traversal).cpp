/*
Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.
*/

// **********************************************************************************************************

vector <int> zigZagTraversal(Node* root)
{
	stack <Node *> stk1;
    stack <Node *> stk2;
    vector <int> vec;
    if (root == NULL) return vec;
    stk1.push(root);
    while (!stk1.empty() || !stk2.empty()){
        
        while (!stk2.empty()){
            Node *temp = stk2.top();
            vec.push_back(temp->data);
            stk2.pop();
            
            if (temp->right) stk1.push(temp->right);
            if (temp->left) stk1.push(temp->left);
        }
        
        while (!stk1.empty()){
            Node *temp = stk1.top();
            vec.push_back(temp->data);
            stk1.pop();
            
            if (temp->left) stk2.push(temp->left);
            if (temp->right) stk2.push(temp->right);
        }
    }
    
    return vec;
}

