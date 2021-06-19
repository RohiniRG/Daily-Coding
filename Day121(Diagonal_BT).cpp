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


void diagonal(Node *root)
{
    queue <Node *> q;

    if (root){
        q.push(root);

        while (!q.empty())
        {
            Node *fr = q.front();
            q.pop();

            while (fr)
            {
                if (fr->left) q.push(fr->left);

                cout<<fr->data<<" ";

                fr = fr->right;
            }
            
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
    
    cout<<"Diagonal: ";
    diagonal(root);
    cout<<endl;

    return 0;
}

