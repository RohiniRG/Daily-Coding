/* 
Given a linked list of N nodes. The task is to reverse this list.

Examples:

Input:
LinkedList: 1->2->3->4->5->6
Output: 6 5 4 3 2 1
Explanation: After reversing the list, elements are 6->5->4->3->2->1.
*/

// ***************************************************************************************************

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
        void reverse();

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


void LinkedList::reverse()
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}


int main()
{
    LinkedList ll_obj;
    
    int N;
    cout<<"Enter N: ";
    cin>>N;

    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        ll_obj.insert(each);
    }
    ll_obj.reverse();
    ll_obj.display();
    return 0;
}