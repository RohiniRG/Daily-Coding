/* 
Given a linked list. Print all the elements of the linked list

Examples:

Input: N = 2 
LinkedList= {1 , 2}
Output: 1 2
 */


#include <iostream>

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


int main(){
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

    return 0; 
}