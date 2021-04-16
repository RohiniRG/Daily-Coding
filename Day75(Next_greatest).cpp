/*
Given an array arr[ ] of size N having distinct elements, 
the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. 
For example, next greater of the last element is always -1.

Example 1:

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.

*/

// ***************************************************************************************************************************

# include <bits/stdc++.h>

using namespace std;


vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack <long long> stk;
        vector <long long> temp (n);
        
        for (int i = n-1; i >= 0; i--)
        {
            
            while (!stk.empty() && stk.top() <= arr[i])
            {
                stk.pop();
            }
            
            if (stk.empty()) 
                temp[i] = -1;         
            else 
                temp[i] = stk.top();

            stk.push(arr[i]);
        }
        return temp;
    }


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    vector <long long> array (n);

    cout<<"Enter array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i]; 
    } 

    vector <long long> final = nextLargerElement(array, n);
    for (int i = 0; i < n; i++)
    {
        cout<<final[i]<<" "; 
    } 
    cout<<endl;

    return 0;
}