/*
Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

Example 1:

Input:
N = 7
Link List = 1->2->1->2->1->3->1
search_for = 1
Output: 4
Explanation:1 appears 4 times.
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
        int count(int search_for);
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


int LinkedList::count(int search_for)
{
    Node *current = head;
    int c = 0;

    while(current != NULL)
    {
        if (current->data == search_for)
        {
            c++;
        }
        current = current->next;
    }

    return c;   
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

    int search_ele, val;
    cout<<"Enter element to be searched: ";
    cin>>search_ele;

    val = ll_obj.count(search_ele);
    cout<<"Count of integer "<<search_ele<<" in linked list: "<<val<<endl;
    
    return 0;
}

