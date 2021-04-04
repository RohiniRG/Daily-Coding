/*
Given a sorted circular linked list, the task is to insert a new node in this circular list 
so that it remains a sorted circular linked list.

Example:

Input:
LinkedList = 1->2->4
(the first and last node is connected,
i.e. 4 --> 1)
data = 2
Output: 1 2 2 4

*/

// ***************************************************************************************************


# include <iostream> 
 
using namespace std;

class CircularLL
{
    struct Node
    {
        int data;
        Node *next = NULL; 
    } *head;
    
public:
    CircularLL()
    { 
        head = NULL;
    }

    void display();
    void insert_sorted(int val);
    void push(int val);
};


void CircularLL::insert_sorted(int val)
{
    Node *newnode = new Node;
    newnode->data = val;

    if (head == NULL)
    {
        head = newnode;
    }

     
    else if (head->data > newnode->data)
    {
        Node *current = head;
        while (current->next != head)
        {
            current = current->next;
        }
        
        newnode->next = head;
        head = newnode;
        current->next = head;
    }

    else
    {
        Node *current = head;
        while (newnode->data > current->next->data && current->next != head)
        {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}


void CircularLL::display()
{
    cout<<"Displaying: ";
    Node *current = head;

    while (current->next != head)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    
    cout<<current->data<<endl;
    
}


void CircularLL::push(int val)
{
    Node *newnode = new Node;
    newnode->data = val;
    newnode->next = head;

    if (head == NULL)
    {
        head = newnode;
        head->next = newnode;
    }
    else
    {
        Node *current = head;

        while (current->next != head)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}


int main()
{
    CircularLL cll_obj;
    
    int N;
    cout<<"Enter N: ";
    cin>>N;

    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        cll_obj.push(each);
    }
    cll_obj.display();

    int new_val;
    cout<<"Enter data: ";
    cin>>new_val;

    cll_obj.insert_sorted(new_val);
    cll_obj.display();

    return 0;
}

