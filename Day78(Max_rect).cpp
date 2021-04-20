/*
Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Examples:

Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output: 8
Explanation: For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is 
1 1 1 1
1 1 1 1
and area is 4 *2 = 8.
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
    for (int i = 0; i < 6; i++)
    {
        int each_area = (right[i] - left[i] + 1) * arr[i];
        if (each_area > area) area = each_area;
    }

    return area;

}


int main()
{   
    int R=3, C=4;
    int A[][C] = {
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}};  
 
    int max_area = max_area_hist(A[0], C);
    
    for(int i=1; i<R; i++) {
        for(int j=0; j<C; j++) {
            if (A[i][j] != 0){
                A[i][j] = A[i][j] + A[i-1][j];
            }
        }
        int result = max_area_hist(A[i], C);
        if (result > max_area) max_area = result;
    }

    cout<<max_area; 
	return 0;
}

