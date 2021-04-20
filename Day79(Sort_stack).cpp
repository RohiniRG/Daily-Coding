/*
Given a stack, the task is to sort it such that the top of the stack has the greatest element.

Example:

Input:
Stack: 3 2 1
Output: 3 2 1
*/

// **********************************************************************************************************

# include <bits/stdc++.h>

using namespace std;

void sortedInsert(stack<int> &s, int x)
{
	if(s.empty() or x>s.top())
	{
		s.push(x);
		return;
	}
	int temp = s.top();
	s.pop();
	sortedInsert(s,x);
	s.push(temp);
}

void sort(stack <int> &s)
{
	if(!s.empty())
	{
		int x = s.top();
		s.pop();
		sort(s);
		sortedInsert(s,x);
	}
}

int main()
{
    stack <int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);

    sort(stk);

    cout<<stk.top()<<endl;

}

