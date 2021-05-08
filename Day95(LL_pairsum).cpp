/*
Given two linked lists(can be sorted or unsorted) of size n1 and n2 of distinct elements. Given a value x. The problem is to count all pairs from both lists whose sum is equal to the given value x.
Note: The pair has an element from each linked list.
Examples: 
 

Input : list1 = 3->1->5->7
        list2 = 8->2->5->3
        x = 10
Output : 2
The pairs are: (5, 5) and (7, 3)
*/

// ***************************************************************************************************

# include <bits/stdc++.h> 
 
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


int pairsum(LinkedList ll1, LinkedList ll2, int X)
{
    unordered_set <int> set;
    int sum_count = 0;

    LinkedList::Node *temp1 = ll1.head;
    LinkedList::Node *temp2 = ll2.head;

    while (temp1)
    {
        set.insert(temp1->data);
        temp1 = temp1->next;   
    }
    
    while (temp2)
    {
        if (set.find(X - temp2->data) != set.end())
            sum_count += 1;

        temp2 = temp2->next;
    }

    return sum_count;
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

    int x;
    cout<<"Enter sum: ";
    cin>>x;
    int ans = pairsum(num_ll1, num_ll2, x);
    cout<<"The total pairs with given sum are: "<<ans<<endl;

    return 0;
}

