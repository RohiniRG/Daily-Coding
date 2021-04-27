// Given an array arr[] of size N, enqueue the elements of the array into a queue and then dequeue them.

// *******************************************************************************************************

#include <bits/stdc++.h>
using namespace std;

queue<int>_push(int arr[],int n)
{
   queue <int> q;
   for (int i = 0;  i < n; i++){
       q.push(arr[i]);
   }
   return q;
   
}

void _pop(queue<int>s)
{
    while (!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
} 


int main(){
    int array[6] = {1, 4, 5, 7, 8, 9};

    queue <int> q = _push(array, 6);
    _pop(q);

    return 0; 
}

