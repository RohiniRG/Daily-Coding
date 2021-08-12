#include<bits/stdc++.h>

using namespace std;
  
int binaryMedian(int m[][MAX], int r ,int c)
{
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < r; i++)
    {
        if (m[i][0] < min_val){
            min_val = m[i][0];
        }

        if (m[i][c-1] > max_val){
            max_val = m[i][c-1];
        }
    }

    int median_ind = ((r * c) + 1)/2;

    while (min < max)
    {
        int mid = min + ((max-min)/2);
        int get_ind = 0;

        for (int i = 0; i < r; i++)
        {
            get_ind += upper_bound(m[0], m[0]+c, mid) - m[0];   
        }

        if (get_ind < median_ind)
        {
            min = mid + 1;
        }
        else {
            max = mid - 1;
        }
    }
    return min;
    
}
 
int main()
{
    int r = 3, c = 3;
    int m[][MAX]= { {1,3,5}, 
                    {2,6,9}, 
                    {3,6,9} };

    cout << "Median is " << binaryMedian(m, r, c) << endl;
    return 0;
}