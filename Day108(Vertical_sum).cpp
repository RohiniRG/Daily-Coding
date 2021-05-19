/*
Given a Binary Tree, find vertical sum of the nodes that are in same vertical line. 
Print all sums through different vertical lines starting from left-most vertical line to right-most vertical line.
*/

void utility(Node *root, int ind, map <int, int> M){
    if (root == NULL) return;
    
    utility(root->left, ind-1, M);
    M[ind] += root->data;
    utility(root->right, ind+1, M);
    
}
vector <int> verticalSum(Node *root) {
    vector <int> v_sum;
    map < int, int> Map;
    map < int, int> :: iterator it;
    
    utility(root, 0, Map);
    for (it = Map.begin(); it != Map.end(); ++it){
        v_sum.push_back(it->second);
    }
    
    return v_sum;
    
}

