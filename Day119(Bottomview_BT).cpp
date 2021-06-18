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

void printBottomViewUtil(Node * root, int curr, int hd, map <int, pair <int, int>> & m)
{
    if (root == NULL)
        return;
     
    if (m.find(hd) == m.end())
    {
        m[hd] = make_pair(root -> data, curr);
    }
    else
    {
        pair < int, int > p = m[hd];
        if (p.second <= curr)
        {
            m[hd].second = curr;
            m[hd].first = root -> data;
        }
    }
     
    printBottomViewUtil(root -> left, curr + 1, hd - 1, m);
     
    printBottomViewUtil(root -> right, curr + 1, hd + 1, m);
}
 
void printBottomView(Node * root)
{
    map < int, pair < int, int > > m;
     
    printBottomViewUtil(root, 0, 0, m);
     
    map < int, pair < int, int > > ::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        pair < int, int > p = it -> second;
        cout << p.first << " ";
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
    
    cout<<"Bottomview: ";
    printBottomView(root);
    cout<<endl;

    return 0;
}

