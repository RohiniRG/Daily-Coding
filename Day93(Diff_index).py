# Given two sorted arrays of distinct elements. 
# There is only 1 difference between the arrays. 
# First array has one element extra added in between. 
# Find the index of the extra element.

# Input:
# N = 6
# A[] = {3,5,7,9,11,13}
# B[] = {3,5,7,11,13}
# Output: 3

# ***************************************************************************************************

def findExtra(a,b,n):
    l = 0
    r = n-1
    i = -1
    while l <= r:
        mid = (l+r)//2
    
        if (a[mid] == b[mid]):
            l = mid+1
        else:
            i = mid
            r = mid-1
        
    return i


arr1 = list(map(int, input('Enter array: ').split(' ')))
arr2 = list(map(int, input('Enter array: ').split(' ')))

print('The index is: ', findExtra(arr1, arr2, len(arr2)))

