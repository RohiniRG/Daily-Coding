/*
Implement a Queue using 2 stacks s1 and s2 .

*/

// **********************************************************************************************************

# include <bits/stdc++.h>

using namespace std;

stack<int> s1;
stack<int> s2;

void push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int pop()
{
    // Your Code
    if (s1.empty() && s2.empty()) {
            return -1;
        }

    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    int x = s2.top();
    s2.pop();
    return x;

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

