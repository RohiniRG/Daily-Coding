/*
Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

Example:

Input:
N = 2
Output: 
1 10
Explanation: 
Binary numbers from
1 to 2 are 1 and 10.
*/

// **********************************************************************************************************

# include <bits/stdc++.h>

using namespace std;

void generateBinary(int n)
{
    queue<string> q;
 
    q.push("1");

    while (n--) {
        string s1 = q.front();
        q.pop();
        cout << s1 << "\n";
 
        string s2 = s1; 
        q.push(s1.append("0"));

        q.push(s2.append("1"));
    }
}
 

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    generateBinary(n);
    return 0;
}
