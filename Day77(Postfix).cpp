/*
Given string S representing a postfix expression, the task is to evaluate the expression and find the final value. 
Operators will only include the basic arithmetic operators like *, /, + and -.

Example:

Input: S = "231*+9-"
Output: -4
Explanation:
After solving the given expression, 
we have -4 as result.
*/

// ***************************************************************************************************************************

# include <bits/stdc++.h>

using namespace std;

int evaluatePostfix(string S)
{
    // Your code here
    stack<int> Stk ;
    for(int i=0; i< S.size(); i++) {
        if (isdigit(S[i])) {
            Stk.push(S[i] - '0');
        }
        else {
            int val1 = Stk.top();
            Stk.pop();
            int val2 = Stk.top();
            Stk.pop();
            
            switch(S[i]) {
                case '+' : Stk.push(val2 + val1);
                            break;
                case '-' : Stk.push(val2 - val1);
                            break;
                case '*' : Stk.push(val2 * val1);
                            break;
                case '/' : Stk.push(val2 / val1);
                            break;
            }
        }
    }
    return Stk.top();
}


int main()
{
    cout<<"Enter string: ";
    string str;
    cin>>str;

    int res = evaluatePostfix(str);
    cout<<"Result: "<<res<<endl;
    return 0;
}

