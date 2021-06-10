#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left_child;
    Node *right_child;

    Node(int val)
    {
        data = val;
        left_child = NULL;
        right_child = NULL;
    }
};


vector <int> levelOrder(Node *root)
{
    queue <Node *> q;
    vector <int> visited;

    q.push(root);

    while (!q.empty())
    {
        Node *front_node = q.front();
        visited.push_back(front_node->data);
        q.pop();

        if (front_node->left_child)
        {
            q.push(front_node->left_child);
        }
        if (front_node->right_child)
        {
            q.push(front_node->right_child);
        }
        
    }
    
    return visited;
} 


int main()
{
    Node* root = new Node(1);
    root->left_child = new Node(2);
    root->right_child = new Node(3);
    root->left_child->left_child = new Node(4);
    root->left_child->right_child = new Node(5);

    cout<<"Level order traversal of tree is: "<<endl;

    vector <int> v;
    v = levelOrder(root);

    for (int i = 0; i != v.size(); i++)
    {   
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}

