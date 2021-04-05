/*
Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, 
first list should have one node more than the second list. 
The resultant lists should also be circular lists and not linear lists.

Example:

Input:
Circular LinkedList: 1->5->7
Output:
1 5
7

*/

// *************************************************************************************************************

# include <iostream> 
 
using namespace std;

class CircularLL
{
    public:
    struct Node
    {
        int data;
        Node *next = NULL; 
    } *head;
    
    CircularLL()
    { 
        head = NULL;
    }

    void display(Node *head);
    void push(int val);
    void split(Node **head_ref1, Node **head_ref2);
};


void CircularLL::display(Node *head)
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


void CircularLL::split(Node **head_ref1, Node **head_ref2)
{
    Node *one_step = head;
    Node *two_step = head;

    while (two_step->next != head && two_step->next->next != head) 
    { 
        two_step = two_step->next->next; 
        one_step = one_step->next; 
    } 
      
    if(two_step->next->next == head)
    {
        two_step = two_step->next; 
    } 
                  
    *head_ref1 = head; 
          
    if(head->next != head) 
        *head_ref2 = one_step->next; 
          
    two_step->next = one_step->next; 
          
    one_step->next = head; 
    
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
    cll_obj.display(cll_obj.head);

    CircularLL::Node *head_ref1, *head_ref2;    
    head_ref1 = NULL;
    head_ref2 = NULL;

    cll_obj.split(&head_ref1, &head_ref2);
    cll_obj.display(head_ref1);
    cll_obj.display(head_ref2);

    return 0;
}

