/*
Given a linked list of size n, you have to delete the node at position pos of the linked list and return the new head. 
The position of initial node is 1.
The tail of the circular linked list is connected to the head using next pointer.

Example:

Input:
LinkedList: 1->2->3->4->5
(the first and last node are connected,
i.e. 5 --> 1)
position: 4
Output: 1 2 3 5

*/

// *************************************************************************************************************

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
    void push(int val);
    void deletion(int pos);
};


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


void CircularLL::deletion(int pos)
{
    Node *current = head;
    Node *prev = NULL; 

    if (head == NULL)
    {
        return;
    }
    for (int i = 0; i < pos-1; i++)
    {
        prev = current;
        current = current->next;
    }

    if (current == head)
    {
        while (current->next != head)
        {
            current = current->next;
        }
        Node* temp = head;
        head = head->next;
        current->next = head;
        delete temp;
    } 
    else
    {
        prev->next = current->next;
        delete current; 
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

    int posn;
    cout<<"Enter position: ";
    cin>>posn;
    
    cll_obj.deletion(posn);

    cll_obj.display();

    return 0;
}
