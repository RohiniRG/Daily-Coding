/*
You are given a string S, the task is to reverse the string using stack.

Example:

Input: S="GeeksforGeeks"
Output: skeeGrofskeeG

*/

// ****************************************************************************

# include <iostream>
# include <bits/stdc++.h>

using namespace std;


char* reverse(char *S, int len)
{
    stack <char> stk;
    for (int i = 0; i < len; i++)
    {
        stk.push(S[i]);
    }
    
    // char rev[len];
    for (int i = 0; i < len; i++)
    {
        S[i] = stk.top();
        stk.pop();
    }
    
    return S;
}


int main()
{
    char str[10000];
    cout<<"Enter string: ";
    cin>>str;

    int l = strlen(str);

    char *ch = reverse(str, l);
    cout<<"Reverse is: "<<ch<<endl;

    return 0;
}

