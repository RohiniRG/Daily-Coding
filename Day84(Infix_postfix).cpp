/*
Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
â€‹Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. 


Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-
Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be abcd^e-fgh*+^*+i-

*/

// **********************************************************************************************************

#include<bits/stdc++.h>
using namespace std;
 
int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 

void infixToPostfix(string s) {
 
    stack<char> st; 
    string result;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        else if(c == '(')
            st.push('(');
 
        else if(c == ')') {
            while(!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.pop();
        }
 
        else {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.push(c);
        }
    }
 
    while(!st.empty()) {
        char temp = st.top();
        st.pop();
        result += temp;
    }
 
    cout << result << endl;
}
 
int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}

