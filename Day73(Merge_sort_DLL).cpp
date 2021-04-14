/*
Given Pointer/Reference to the head of a doubly linked list of N nodes, 
the task is to Sort the given doubly linked list using Merge Sort in both non-decreasing and non-increasing order.

Example: 

Input:
N = 8
value[] = {7,3,5,2,6,4,1,8}
Output:
1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1

*/

// *************************************************************************************************************

#include <iostream>

using namespace std;


class Node 
{ 
    public:
    int data; 
    Node *next, *prev; 
} *head; 
  

void insert(Node** head, int data) 
{ 
    Node *newnode = new Node();
    newnode->data = data; 
    newnode->next = newnode->prev = NULL; 

    if (*head == NULL) 
        *head = newnode; 
    else
    { 
        newnode->next = *head; 
        (*head)->prev = newnode; 
        *head = newnode; 
    } 
} 


void display(Node *head)
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


Node *getMiddle(Node *head)
{
    Node *two_step = head;
    Node *one_step = head;
    Node* temp;

    if (head == NULL || head->next == NULL)
        return head;

    while (two_step->next != NULL && two_step->next->next != NULL)
    {
        temp = one_step;
        one_step = one_step->next;
        two_step = two_step->next->next;
    }

    Node *mid = one_step->next;
    one_step->next = NULL;

    return mid;
}


Node *merge(Node*head, Node*middle)
{
    if (head == NULL) 
        return middle; 
  
    if (middle == NULL) 
        return head; 
  
    if (head->data < middle->data) 
    { 
        head->next = merge(head->next, middle); 
        head->next->prev = head; 
        head->prev = NULL; 
        return head; 
    } 
    else
    { 
        middle->next = merge(head, middle->next); 
        middle->next->prev = middle; 
        middle->prev = NULL; 
        return middle; 
    } 
}


Node* mergeSort(Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *middle = getMiddle(head);

    head = mergeSort(head);
    middle = mergeSort(middle);
    return merge(head, middle);

}


int main(void) 
{   
    Node obj;
    int N;
    cout<<"Enter number of elements to insert: ";
    cin>>N;
    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        insert(&head, each);
    }
    
    display(head);

    head = mergeSort(head); 
    cout << "Linked List after sorting\n"; 
    display(head); 
    return 0; 
}

