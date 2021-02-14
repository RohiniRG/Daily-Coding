# Given two sorted arrays, a[] and b[], 
# the task is to find the median of these sorted arrays, 
# in O(log n + log m) time complexity, when n is the number of elements in the first array, 
# and m is the number of elements in the second array.

# Example: 

# Input: ar1[] = {-5, 3, 6, 12, 15}
#         ar2[] = {-12, -10, -6, -3, 4, 10}
# Output : The median is 3.
# Explanation : The merged array is :
#         ar3[] = {-12, -10, -6, -5 , -3,
#                  3, 4, 6, 10, 12, 15},
#        So the median of the merged array is 3

# Input: ar1[] = {2, 3, 5, 8}
#         ar2[] = {10, 12, 14, 16, 18, 20}
# Output : The median is 11.
# Explanation : The merged array is :
#         ar3[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20}
#         if the number of the elements are even, 
#         so there are two middle elements,
#         take the average between the two :
#         (10 + 12) / 2 = 11.

# ***************************************************************************************************

def merge(left, right):
    arr = []
    i = 0
    j = 0
    k = 0

    while(i < len(left) and j < len(right)):
        if left[i] < right[j]:
            arr.append(left[i])
            i += 1

        else:
            arr.append(right[j])
            j += 1

    while(i < len(left)):
        arr.append(left[i])
        i += 1

    while(j < len(right)):
        arr.append(right[j])
        j += 1

    return arr

arr1 = list(map(int, input('Enter array 1: ').split(' ')))
arr2 = list(map(int, input('Enter array 2: ').split(' ')))
final = merge(arr1, arr2)

mid = len(final)//2  
if len(final) % 2 == 0:  
    print('Median: ', (final[mid] + final[mid-1])//2)
else:
    print('Median: ', final[mid])
