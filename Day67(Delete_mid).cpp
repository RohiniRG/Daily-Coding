/*
Given a singly linked list, delete middle of the linked list. 
For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. 
For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.
If the input linked list is NULL or has 1 node, then it should return NULL

Examples:

Input:
LinkedList: 1->2->3->4->5
Output: 1 2 4 5

Input:
LinkedList: 2->4->6->7->5->1
Output: 2 4 6 5 1

*/

// *************************************************************************************************************

# include <iostream>

using namespace std;
  
class LinkedList
{  
    struct Node
    {
        int data;
        Node *next = NULL;

    } *head;

    public:  
    LinkedList()
    {
        head = NULL;
    }

    void insert(int val);
    void display();
    void delete_mid();
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


void LinkedList::delete_mid()
{
    Node *two_step = head;
    Node *one_step = head;
    Node* temp;

    if (head == NULL || head->next == NULL)
        return;

    while (two_step->next != NULL && two_step->next->next != NULL)
    {
        temp = one_step;
        one_step = one_step->next;
        two_step = two_step->next->next;
    }

    if (two_step->next == NULL)
    {
        temp->next = one_step->next;
        delete one_step;
    }
    else
    {   
        temp = one_step->next;
        one_step->next = one_step->next->next;
        delete temp;
    }
    
    
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

    ll_obj.delete_mid();

    ll_obj.display();

    return 0;
}

