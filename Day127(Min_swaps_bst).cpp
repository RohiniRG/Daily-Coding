#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int minSwaps(int bt_array[], int n)
{
    std::vector< pair<int,int> > t(n);

    int ans = 0;
    for(int i = 0; i < n; i++)
        t[i].first = bt_array[i], t[i].second = i;
     
    sort(t.begin(), t.end());

    for(int i = 0; i < t.size(); i++)
    {
        if(i == t[i].second)
            continue;
        else
        {
            swap(t[i].first, t[t[i].second].first);
            swap(t[i].second, t[t[i].second].second);
            --i;
        }
        ans++;
    }
    return ans;
}


int main()
{
    int N = 4;
    int binaryTree[] = {1, 6, 8, 7};

    int min = minSwaps(binaryTree, N);
    cout<<"Minimum swaps : "<<min<<endl;

    return 0;
}

