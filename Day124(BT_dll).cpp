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

class Solution
{
    public: 
        Node *prev = NULL;
        void bt2DLL_UTL(Node *root, Node **head)
        {            
            if (root == NULL)
                return;
                         
            bt2DLL_UTL(root->left, head);
        
            if (prev)
            {
                root->left = prev;
                prev->right = root;
            }
            else
            {
                *head = root;
            }
            
            prev = root;
            
            bt2DLL_UTL(root->right, head);
        
        }
        
        
        Node *bToDLL(Node *root)
        {
            Node *head = NULL;
            bt2DLL_UTL(root, &head);
        
            return head;
        }
};


void printList(Node *node)
{
    cout<<"DLL is as follows: ";
    while (node!=NULL)
    {
        cout<<node->data << " ";
        node = node->right;
    }
}


int main()
{
    Node* root = new Node(10);
    root->left = new Node(12);
    root->right = new Node(15);
    root->left->left = new Node(25);
    root->left->right = new Node(30);
    root->right->left = new Node(36);

    Solution s;    
    Node *final = s.bToDLL(root);
    printList(final);
    cout<<endl;

    return 0;
}

