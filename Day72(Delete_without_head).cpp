/*
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. 
The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. 
It is guaranteed that the node to be deleted is not a tail node in the linked list.

Example:

Input:
N = 2
value[] = {1,2}
node = 1
Output: 2
Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2.

*/

// *************************************************************************************************************


# include <iostream>

using namespace std;
  
class LinkedList
{
    public:   
    struct Node
    {
        int data;
        Node *next = NULL;

    } *head;
 
    LinkedList()
    {
        head = NULL;
    }

    void insert(int val);
    void display();
    void delete_at_node(Node *del);
};


void LinkedList::insert(int val)
{
    Node *newnode = new Node;
    newnode->data = val;

    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        Node *current = head;
        
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
    
}


void LinkedList::display()
{
    cout<<"Displaying: ";
    Node *current = head;

    while (current->next != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    
    cout<<current->data<<endl;
    
}


void LinkedList::delete_at_node(Node *del)
{
    del->data = del->next->data;
    del->next = del->next->next;
}


int main()
{
    LinkedList ll_obj;
    
    int N;
    cout<<"Enter number of elements to insert: ";
    cin>>N;
    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        ll_obj.insert(each);
    }
    
    ll_obj.display();

    ll_obj.delete_at_node(ll_obj.head->next->next);

    ll_obj.display();

    return 0;
}

