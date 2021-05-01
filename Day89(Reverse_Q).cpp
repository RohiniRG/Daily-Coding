/*
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue,
leaving the other elements in the same relative order.

Example:

Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5
*/
// **********************************************************************************************************

#include <bits/stdc++.h>

using namespace std;


queue<int> modifyQueue(queue<int> q, int k)
{
    stack <int> s;
    queue <int> res;
    int len = q.size();
    
    for (int i = 0; i < k; i++)
    {
        int f = q.front();
        q.pop();
        s.push(f);
    }
    
    for (int i = 0; i < k; i++)
    {
        int t = s.top();
        s.pop();
        res.push(t);
    }
    
    for (int i = 0; i < len-k; i++)
    {
        int f = q.front();
        q.pop();
        res.push(f);
    }
    
    return res;
    
}

void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}

int main()
{
    queue<int> Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    Queue.push(60);
    Queue.push(70);
    Queue.push(80);
    Queue.push(90);
    Queue.push(100);
 
    int k = 5;
    modifyQueue(Queue, k);
    Print(Queue);
}

