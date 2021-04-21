/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can be 
made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit.

Input:
N = 8
arr[] = {7 2 8 9 1 3 6 5}
Output: 16
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.
*/

// **********************************************************************************************************

# include <bits/stdc++.h>

using namespace std;


int max_area_hist(int arr[], int c)
{
    stack <int> stk;
    int left[c];
    int right[c];

    for (int i = 0; i < c; i++)
    {
        while(true) 
        {
            if(stk.empty())
            {
                stk.push(i);
                left[i]  = 0;
                break;
            }

            int temp = stk.top();
            if (arr[i] <= arr[temp]) {
                stk.pop();
            }
            
            
            else {
                left[i] = temp + 1;
                stk.push(i);
                break;
            }
        }
    }

    stack <int> st;

    for (int i = c-1; i >= 0; i--)
    {
        while(true) 
        {
            if(st.empty())
            {
                st.push(i);
                right[i] = c-1;
                break;
            }

            int temp = st.top();
            if (arr[i] <= arr[temp]) {
                st.pop();
            }
            
            
            else {
                right[i] = temp - 1;
                st.push(i);
                break;
            }
        }
    }


    int area = 0;
    for (int i = 0; i < c; i++)
    {
        int each_area = (right[i] - left[i] + 1) * arr[i];
        if (each_area > area) area = each_area;
    }

    return area;

}

int main()
{   
    int n;
    cout<<"Enter length of historam: ";
    cin>>n;

    int arr[n]; 

    cout<<"Enter elements of array: ";  

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max_area = max_area_hist(arr, n);
    cout<<"Max area is: "<<max_area<<endl;

    return 0;
}