/*
Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.

Examples:

Input:
LinkedList: 1->3->4->7->9->10->1
Output: 3 1 7 4 10 9 1
Explanation: After swapping each pair
considering (1,3), (4, 7), (9, 10).. so
on as pairs, we get 3, 1, 7, 4, 10, 9,
1 as a new linked list.
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
        void pair_swap();

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


void LinkedList::pair_swap()
{
    if (head == NULL || head->next == NULL)
        return;

    Node* prev = head;
    Node* current = head->next;

    head = current;

    while (1)
    {
        Node* next = current->next;
        current->next = prev;

        if (next == NULL || next->next == NULL)
        {
            prev->next = next;
            break;
        }
        
        prev->next = next->next;   

        prev = next;
        current = prev->next;
    }
    return;
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
    ll_obj.display();
    ll_obj.pair_swap();
    cout<<"Pair swapping...";
    ll_obj.display();

    return 0;
}

