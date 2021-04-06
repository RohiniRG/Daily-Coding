/*
Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

Example:

Input:
N = 3
value[] = {1,3,4}
x = 2
Output: True
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.

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
    bool check_loop();
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


bool check_loop()
{
    LinkedList::Node* one_step = head;
    LinkedList::Node* two_step = head;
    
    while(two_step->next != NULL && two_step->next->next != NULL)
    {
        one_step = one_step->next;
        two_step = two_step->next->next;
        if (one_step == two_step)
        {
            return 1;
        }
        
    }
    return 0;
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
    
    ll_obj.head->next->next->next->next = ll_obj.head;

    if (check_loop())
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}

