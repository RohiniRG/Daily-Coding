/*
Implement a Stack using two queues q1 and q2.

Examples:

Input:
push(2)
push(3)
pop()
push(4)
pop()
Output: 3 4
Explanation:
push(2) the stack will be {2}
push(3) the stack will be {2 3}
pop()   poped element will be 3 the 
        stack will be {2}
push(4) the stack will be {2 4}
pop()   poped element will be 4  
*/

// **********************************************************************************************************


# include <bits/stdc++.h>

using namespace std;

queue <int> q1;
queue <int> q2;

void push(int x)
{
    q1.push(x);
}

int pop()
{
    int f;
    if (q1.empty())
    {
        return -1;
    }
    
    while (q1.size() != 1) {
        q2.push(q1.front());
        q1.pop();
    }
  
    f = q1.front();
    q1.pop();
    queue <int> q;
    q = q1;
    q1 = q2;
    q2 = q;
    
   
    return f;
}

int main()
{
    int val;
    push(2);
    push(3);
    val = pop();
    push(4);
    val = pop();
    cout<<"Last popped: "<<val<<endl;

    return 0;   
}

