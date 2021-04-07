/*
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15

*/

// *************************************************************************************************************

# include <iostream>

using namespace std;
  
class Node {
public:
    int data;
    Node* next;
};


int intersectPoint(Node* head1, Node* head2)
{
    Node *curr1 = head1;
    int len1 = 0;
    while (curr1 != NULL)
    {
        curr1 = curr1->next;
        len1 += 1;
    }
    
    Node *curr2 = head2;
    int len2 = 0;
    while (curr2 != NULL)
    {
        curr2 = curr2->next;
        len2 += 1;
    }
    
    int diff = abs(len1 - len2);

    if (diff != 0 )
    {
        if (len1 > len2)
        {    
            for (int i = 0; i < diff; i++)
            {
                head1 = head1->next;
            }
        }
        
        else 
        {
            for (int i = 0; i < diff; i++)
            {
                head2 = head2->next;
            }
        }
    
    }
    
    Node *curr_1 = head1;
    Node *curr_2 = head2;
    
    while (curr_1 != NULL)
    {
        
        if (curr_1 == curr_2)
        {
            return curr_1->data;
        }
        curr_1 = curr_1->next;
        curr_2 = curr_2->next;
        
    }    
    return -1;
}


int main()
{
    Node* newNode;
  
    Node* head1 = new Node();
    head1->data = 10;
  
    Node* head2 = new Node();
    head2->data = 3;
  
    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
  
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
  
    head1->next->next->next = NULL;
  
    cout << "The node of intersection is " << intersectPoint(head1, head2);
}

