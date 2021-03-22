# Implement Merge Sort is a Divide and Conquer algorithm. 
# It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. 
# The merge() function is used for merging two halves. 
# The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted 
# and merges the two sorted sub-arrays into one. 

# ***************************************************************************************************

def merge_sort(arr, l, h):
    if h > l:
        mid = (l+h)//2

        merge_sort(arr, l, mid)
        merge_sort(arr, mid+1, h)
        merge(arr, l, mid, h)
        # print('pass')


def merge(arr, l, mid, h):
    left = arr[l:mid+1]
    right = arr[mid+1:h+1]

    i = 0
    j = 0
    k = l
    while (i < len(left) and j < len(right)):
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1 < len(left)
        k += 1
        # print('1')

    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1
        # print('2')

    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1
        # print('3')

        
ar1 = list(map(int, input('Enter array: ').split(' ')))
merge_sort(ar1, 0, len(ar1)-1)
print('Sorted array: ', ar1)
