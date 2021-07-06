#include <iostream>

using namespace std;

struct BST
{
    int data;
    BST *left, *right;

    public:
    BST(int val=0) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    BST* Insert(BST *root, int val)
    {
        if (root == NULL)
        {
            root = new BST(val);
    
        }
        else
        {
            if (val > root->data) 
            {
                root->right = Insert(root->right, val);
            }
            else
            {
                root->left = Insert(root->left, val);
            }
            
        }
        return root;    
    }

    void Search(BST *root, int key)
    {
        if (!root) 
        {
            cout<<"NOT FOUND!\n";
            return; 
        }

        if (key == root->data) 
        {
            cout<<"FOUND!\n";
            return;
        };

        if (key < root->data)
        {
            return Search(root->left, key);
        }
        else if (key > root->data)
        {
            return Search(root->right, key);
        }

    }
};

int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
    b.Search(root, 170);

    return 0;
}
