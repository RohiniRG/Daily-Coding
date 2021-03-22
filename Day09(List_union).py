# Given two sorted arrays, find their union.
# Example:

# Input : arr1[] = {1, 3, 4, 5, 7}
#         arr2[] = {2, 3, 5, 6} 
# Output : Union : {1, 2, 3, 4, 5, 6, 7} 

# Input : arr1[] = {2, 5, 6}
#         arr2[] = {4, 6, 8, 10} 
# Output : Union : {2, 4, 5, 6, 8, 10} 

# ***************************************************************************************************

arr1 = list(map(int, input('Enter array: ').split(' ')))
arr2 = list(map(int, input('Enter array: ').split(' ')))

n = len(arr1)
m = len(arr2)

i = 0
j = 0
k = 0
union_arr = []

while(i < n and j < m):
    if arr1[i] < arr2[j]:
        if (k == 0 or arr1[i] != union_arr[-1]):
            union_arr.append(arr1[i])
            i += 1
        else:
            i += 1

    elif arr1[i] > arr2[j]:
        if (k == 0 or arr2[j] != union_arr[-1]):
            union_arr.append(arr2[j])
            j += 1
        else:
            j += 1

    else:
        if (k == 0 or arr2[j] != union_arr[-1]):
            union_arr.append(arr2[j])
            j += 1
            i += 1
        else:
            j += 1
            i += 1

    k += 1
            
while i < n:
    if (k == 0 or arr1[i] != union_arr[-1]):
        union_arr.append(arr1[i])
        i += 1
    else:
        i += 1
    k += 1

while j < m:
    if (k == 0 or arr2[j] != union_arr[-1]):
        union_arr.append(arr2[j])
        j += 1
    else: 
        j += 1

    k += 1

print('Union of the sorted arrays is ',union_arr)
