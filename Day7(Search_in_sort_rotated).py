# An element in a sorted array can be found in O(log n) time via binary search. 
# But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. 
# So for instance, 1 2 3 4 5 might become 3 4 5 1 2. 
# Devise a way to find an element in the rotated array in O(log n) time.

# Example:

# Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
#          key = 3
# Output : Found at index 8

# Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
#          key = 30
# Output : Not found

# Input : arr[] = {30, 40, 50, 10, 20}
#         key = 10   
# Output : Found at index 3

# ***************************************************************************************************

def binary_pivot_search(arr, low, high, key):
    pi = pivot_ele(arr, low, high)
    if pi == -1:
        binary_search(arr, low, high, key)

    if arr[pi] == key:
        return pi
    if arr[0] <= key:
        return binary_search(arr, low, pi-1, key)
    return binary_search(arr, pi+1, high, key)


def binary_search(arr, low, high, key):
    if high < low:
        return -1

    mid = (low + high)//2
    if (arr[mid] == key):
        return mid
    if (key < arr[mid]):
        return binary_search(arr, low, mid-1, key)
    return binary_search(arr, mid+1, high, key)


def pivot_ele(arr, low, high):
    if high < low:
        return -1

    mid = (low + high)//2
    if (mid < high and arr[mid]>arr[mid+1]):
        return mid
    if (mid > low and arr[mid]<arr[mid-1]):
        return mid-1
    if (arr[low] <= arr[mid]):
        return pivot_ele(arr, mid+1, high)
    return pivot_ele(arr, low, mid-1)
    

a1 = list(map(int, input('Enter array: ').split(' ')))
key = int(input('Enter key: '))
check = binary_pivot_search(a1, 0, len(a1)-1, key)
if check != -1:
    print(f'Found at index {check}')
else:
    print('Not found')
