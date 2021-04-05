/*
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.

Example:

Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.

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
    Node* reverse(Node *head_ref, int k);
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


LinkedList::Node* LinkedList::reverse(Node *head_ref, int k)
{
    if (head_ref == NULL)
        return NULL;
        
    Node *current = head_ref;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;

    while (current != NULL && count < k)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
        count += 1;
    }

    if (next != NULL)
        head_ref->next = reverse(next, k);
 
    return prev;

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

    int K;
    cout<<"Enter K: ";
    cin>>K;

    ll_obj.head = ll_obj.reverse(ll_obj.head, K);

    ll_obj.display();

    return 0;
}

