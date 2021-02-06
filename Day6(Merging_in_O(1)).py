# We are given two sorted arrays. 
# We need to merge these two arrays such that the initial numbers (after complete sorting) 
# are in the first array and the remaining numbers are in the second array.
# Extra space allowed in O(1).

# Example: 

# Input: ar1[] = {10};
#        ar2[] = {2, 3};
# Output: ar1[] = {2}
#         ar2[] = {3, 10}  

# Input: ar1[] = {1, 5, 9, 10, 15, 20};
#        ar2[] = {2, 3, 8, 13};
# Output: ar1[] = {1, 2, 3, 5, 8, 9}
#         ar2[] = {10, 13, 15, 20}

# ***************************************************************************************************

ar1 = list(map(int, input('Enter array: ').split(' ')))
ar2 = list(map(int, input('Enter array: ').split(' ')))
n = len(ar1)
m = len(ar2)

i = n-1
j = 0

while (i >= 0 and j < m):
    if ar1[i] > ar2[j]:
        ar1[i], ar2[j] = ar2[j], ar1[i]
        i -= 1
        j += 1
    else:
        break

ar1.sort()
ar2.sort()

print('Merging of arrays: ', ar1, ar2)