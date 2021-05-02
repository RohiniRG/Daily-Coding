/*
Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

Example 1:

Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 
*/
// **********************************************************************************************************

# include <bits/stdc++.h>

using namespace std;

void max_of_subarrays(int *arr, int n, int k)
{
    // your code here
    deque <int> dq (k);

    for (int i = 0; i < k; i++)
    {
        while(!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        
        dq.push_back(i);
    }
    
    
    vector <int> v;
    for (int i = k; i < n; i++)
    {   
        v.push_back(arr[dq.front()]);
        
        while (!dq.empty() && dq.front() <= i-k)
            dq.pop_front();
        
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
            
        dq.push_back(i);

    }
    v.push_back(arr[dq.front()]);
    
    cout<<"Result:"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int N, k;
    cout<<"Enter N: ";
    cin>>N;
    cout<<"Enter k: ";
    cin>>k;
    int arr[N];

    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;
        arr[i] = each;
    }

    max_of_subarrays(arr, N, k);
}