/*
The stock span problem is a financial problem where we have a series of n daily price quotes 
for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days
just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85},
then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

*/

// **********************************************************************************************************

# include <bits/stdc++.h>

using namespace std;

void calculateSpan(int price[], int n, int S[])
{
    // Create a stack and push index of first
    // element to it
    stack<int> st;
    st.push(0);
 
    S[0] = 1;
 
    for (int i = 1; i < n; i++) {
        while (!st.empty() && price[st.top()] <= price[i])
            st.pop();
 
        S[i] = (st.empty()) ? (i + 1) : (i - st.top());
 
        st.push(i);
    }
}


int main()
{
    int price[] = { 10, 4, 5, 90, 120, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    int S[n];
 
    calculateSpan(price, n, S);
 
    for (int i = 0; i < n; i++)
    {
        cout<<S[i]<<endl;
    }
 
    return 0;
}