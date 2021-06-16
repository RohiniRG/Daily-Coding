#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


void rightview(Node *root)
{
    Node *curr = root;
    queue <Node *> q;
    vector <int> level;
    int l = -1;

    q.push(root);
    level.push_back(0);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int curr_l = level[0];
        level.erase(level.begin());

        if (l != curr_l){
            cout<<temp->data<<" ";
            l = level[0];
        }

        if (temp->right) {
            q.push(temp->right);
            level.push_back(curr_l+1);
        }

        if (temp->left) {
            q.push(temp->left);
            level.push_back(curr_l+1);
        }   
    }
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->right = new Node(8);
    
    cout<<"Rightview: ";
    rightview(root);
    cout<<endl;

    return 0;
}

