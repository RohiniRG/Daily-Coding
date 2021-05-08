/*
Given a linked list, task is to make a function which check whether the length of linked list is even or odd.

Examples:

Input : 1->2->3->4->NULL
Output : Even

Input : 1->2->3->4->5->NULL
Output : Odd
*/

// **********************************************************************************************************

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
    int even_odd();
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


int LinkedList::even_odd()
{
    Node *two_step = head;
    Node* temp;

    while (two_step != NULL && two_step->next != NULL)
    {
        two_step = two_step->next->next;
    }
    if (two_step) return 0;
    return 1;
    
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

    if (ll_obj.even_odd()) cout<<"The number of nodes are even"<<endl;
    else cout<<"The number of nodes are odd"<<endl;
    return 0;
}
