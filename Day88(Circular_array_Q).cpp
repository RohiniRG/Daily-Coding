/*
Given size of a queue and Q query. The task is to perform operations according to the 
type of query. Queries can be of following types:
    1) 1 element: This means push the element into the queue (allowed only when queue is not full).
    2) 2: This means pop the element at front from the queue (allowed only when queue is not empty).
   
*/
// **********************************************************************************************************

#include <iostream>

using namespace std;

class Queue
{   
    int front ;
    int rear;
    public:
        Queue()
        {   
            front = -1;
            rear = -1;
        }
        bool IsEmpty()
        {
            return (front == -1 && rear == -1);
        }
        bool IsFull(int size)
        {
            return ((rear+1) % size == front) ;
        }

        void Enqueue(int cq[], int size ,int x);
        void Dequeue(int cq[], int size);
        void Display(int cq[], int size);

};

void Queue :: Enqueue(int cq[], int size , int x)
{   
    cout<<"Enqueuing: "<<endl;
    if (IsFull(size))
    {
        cout<<"Queue Full"<<endl;
    }
    else if (IsEmpty())
    {
        front = rear = 0;
        cq[rear] = x;
    }
    else 
    {
        rear = (rear + 1) % size;
        cq[rear] = x;
    }
}

void Queue :: Dequeue(int cq[], int size)
{   
    int item;
    cout<<"Dequeuing: "<<endl;
    if(IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if(front == rear)
    {
        item = cq[front];
        front = rear = -1;
        cout<<"Deleted Element is: "<<item;
    }
    else
    {   
        item = cq[front];
        front = (front + 1) % size;
        cout<<"Deleted Element is: "<<item;
    }
    
}

void Queue :: Display(int cq[], int size)
{   
    cout<<"\nElements: ";
    for(int i= front; i != rear; i = (i+1)%size )
    {
        cout<<cq[i]<<endl;
    }
    cout<<cq[rear];
}


int main() 
{   
    Queue Q;
    int MAX, exit=0;
    cout<<"Enter the Size of Queue: ";
    cin>>MAX;

    int A[MAX];
    do{
    cout<<"\n\n1) Display"<<endl;
    cout<<"2) Add."<<endl;
    cout<<"3) Delete."<<endl;
    cout<<"4) Exit."<<endl;

    int ch;
    cout<<"\nEnter your choice: ";
    cin>>ch;

    switch(ch)
    {   case 1: Q.Display(A, MAX);
                break;

        case 2: int val;
                cout<<"Enter the Element you want to insert: ";
                cin>>val;
                Q.Enqueue(A, MAX, val);
                break;

        case 3: int del;
                Q.Dequeue(A, MAX);
                break;

        case 4: cout<<"\nExiting!!!";
                exit = 1;
                break;

        default: cout<<"!!!\n\tInvalid Option!!!";
    }
    }while(exit != 1);
}