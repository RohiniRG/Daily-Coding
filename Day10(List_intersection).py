# Given two sorted arrays, find their intersection.
# Example:

# Input : arr1[] = {1, 3, 4, 5, 7}
#         arr2[] = {2, 3, 5, 6} 
# Output : Intersection : {3, 5}

# Input : arr1[] = {2, 5, 6}
#         arr2[] = {4, 6, 8, 10} 
# Output : Intersection : {6}

# ***************************************************************************************************


a = list(map(int, input('Enter array: ').split(' ')))
b = list(map(int, input('Enter array: ').split(' ')))

inter = []

n = len(a)
m = len(b)

i = 0
j = 0
k = 0
while (i < n and j < m):
    if a[i] < b[j]:
        i += 1
    
    elif a[i] > b[j]:
        j += 1

    else:
        if (k == 0 or a[i] != inter[-1]):
            inter.append(a[i])
        i += 1
        j += 1
        k += 1
        
print('Intersection of the sorted arrays is ', inter)