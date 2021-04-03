/*
Given two numbers represented by two linked lists of size N and M. 
The task is to return a sum list. 
The sum list is a linked list representation of the addition of two input numbers.

Example:

Input: N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).

*/

// ***************************************************************************************************

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
    void reverse();
        // void adding(LinkedList ll2);
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


LinkedList adding(LinkedList ll1, LinkedList ll2)
{
    ll1.reverse();
    ll2.reverse();

    LinkedList ans_ll;
    
    LinkedList::Node *curr1 = ll1.head;
    LinkedList::Node *curr2 = ll2.head;

    int carry = 0;

    while (curr1 != NULL && curr2 != NULL)
    {
        int new_sum = curr1->data + curr2->data + carry;

        if (new_sum > 9)
        {   
            int data = new_sum % 10;
            ans_ll.insert(data);

            carry = (new_sum - data)/10;
        }
        else
        {
            carry = 0;
            ans_ll.insert(new_sum);
        }

        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    while (curr1 != NULL)
    {
        int new_sum = curr1->data + carry;

        if (new_sum > 9)
        {   
            int data = new_sum % 10;
            ans_ll.insert(data);

            carry = (new_sum - data)/10;
        }
        else
        {
            carry = 0;
            ans_ll.insert(new_sum);
        }

        curr1 = curr1->next;
    }

    while (curr2 != NULL)
    {
        int new_sum = curr2->data + carry;

        if (new_sum > 9)
        {   
            int data = new_sum % 10;
            ans_ll.insert(data);

            carry = (new_sum - data)/10;
        }
        else
        {
            carry = 0;
            ans_ll.insert(new_sum);
        }

        curr2 = curr2->next;
    }

    ans_ll.reverse();
    return ans_ll;
}


int main()
{
    LinkedList num_ll1, num_ll2;
    
    int N, M;
    cout<<"Enter N: ";
    cin>>N;
    cout<<"Enter elements to insert in number 1: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        num_ll1.insert(each);
    }
    num_ll1.display();

    cout<<"Enter M: ";
    cin>>M;
    cout<<"Enter elements to insert in number 2: ";
    for (int i = 0; i < M; i++)
    {   
        int each;
        cin>>each;

        num_ll2.insert(each);
    }
    num_ll2.display();

    LinkedList ans_ll;
    ans_ll = adding(num_ll1, num_ll2);
    ans_ll.display();

    return 0;
}
