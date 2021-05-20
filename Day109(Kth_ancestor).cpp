/*
Given a binary tree of size  N, a node and a positive integer k.
Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. 
If there does not exist any such ancestor then return -1.
*/

int treeSize = 0;
void getLength(Node *root)
{
    if(!root)return;
    getLength(root->left);
    treeSize++;
    getLength(root->right);
}

void generateArray(Node *root, int ancestors[])
{
	ancestors[root->data] = -1;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();
		if (temp->left)
		{
			ancestors[temp->left->data] = temp->data;
			q.push(temp->left);
		}
		if (temp->right)
		{
			ancestors[temp->right->data] = temp->data;
			q.push(temp->right);
		}
	} 
}

int kthAncestorUtil(Node *root, int n, int k, int node)
{
	int ancestors[n+1] = {0};
	generateArray(root,ancestors);
	int count = 0;
	while (node!=-1)
	{ 
		node = ancestors[node];
		count++;
		if(count==k)break;
	}
	return node;
} 

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    getLength(root);
    return kthAncestorUtil(root, treeSize, k, node);
}