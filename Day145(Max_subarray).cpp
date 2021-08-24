#include <bits/stdc++.h>
 
using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k)
{    
    vector <int> res;
    deque<int> q;

    int i = 0;

    for(i = 0;i<k;i++)
    {
        while((!q.empty()) && (arr[i] >= arr[q.back()]))
            q.pop_back();
        
        q.push_back(i);
        
    }

    for(;i<n;i++)
    {
        res.push_back(arr[q.front()]);
        
        while((!q.empty()) && (q.front() <= i-k))
        q.pop_front();
        
        while((!q.empty()) && (arr[i] >= arr[q.back()])) 
        q.pop_back();
        
        q.push_back(i);
        
    }

    res.push_back (arr[q.front()]);
    q.pop_front();

    return res;
}

int main()
{
    int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector <int> res = max_of_subarrays(arr, n, k);

    for (int t = 0; t < res.size(); t++)
    {
        cout<<res[t]<<" ";
    }
    cout<<"\n";
    return 0;
}