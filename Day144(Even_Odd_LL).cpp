# include <iostream> 
 
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};


void insert(Node **head, int val)
{
    Node *newnode = new Node();
    newnode->data = val;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }

    else
    {
        Node *current = *head;
        
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
    
}


void display(Node *head)
{
    if (head){
        cout<<"Displaying: ";
        Node *current = head;

        while (current->next != NULL)
        {
            cout<<current->data<<" ";
            current = current->next;
        }
        
        cout<<current->data<<endl;
    }
    else
    {
        return;
    }
    
    
}


Node* segregate(Node *head)
{
    Node *oddNode;
    Node *oddHead = NULL;

    while (head && head->data%2 != 0)
    {
        oddNode = head;
        insert(&oddHead, oddNode->data);

        head = head->next;
        delete oddNode;
    }
    display(oddHead);

    if (head){
        Node *current = head;
        while (current->next->next != NULL)
        {
            if (current->next->data%2 != 0)
            {
                oddNode = current->next;
                current->next = oddNode->next;
                insert(&oddHead, oddNode->data);
                delete oddNode;
            }
            current=current->next;
        }
    }

    if (head)
    {
        Node *final = head;
        while (final->next != NULL)
        {
            final = final->next;
        }
        final -> next = oddHead;
        return head;
    }
    return oddHead;
    
}


int main()
{
    Node *head = NULL;

    int N;
    cout<<"Enter N: ";
    cin>>N;

    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        insert(&head, each);
    }    
    
    display(head);

    head = segregate(head);

    cout<<"After segregation, ";
    display(head);
    return 0;
}

