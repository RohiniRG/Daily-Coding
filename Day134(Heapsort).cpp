#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
  
    if (right < n && arr[right] > arr[largest])
        largest = right;
  
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


void buildHeap(int arr[], int n)
{
    int last_node_idx = (n/2) - 1;

    for (int i=last_node_idx; i>-1; i--)
    {
        heapify(arr, n, i);
    }
}


int main()
{
    int n = 5;
    int arr[] = {4, 10, 3, 5, 1};
    buildHeap(arr, n);
    cout<<"Heap sorted array is is: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}

