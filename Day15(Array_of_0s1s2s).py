# Given an array A[] consisting 0s, 1s and 2s. 
# The task is to write a function that sorts the given array. 
# The functions should put all 0s first, then all 1s and all 2s in last.

# Examples:

# Input: {0, 1, 2, 0, 1, 2}
# Output: {0, 0, 1, 1, 2, 2}

# Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
# Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

# ***************************************************************************************************

arr = list(map(int, input('Enter array: ').split(' ')))
count0 = 0
count1 = 0
count2 = 0

for i in range(len(arr)):
    if arr[i] == 0:
        count0 += 1
    elif arr[i] == 1:
        count1 += 1
    else:
        count2 += 1

count1 = count0 + count1
count2 = count1 + count0 + count2

for i in range(len(arr)):
    if i < count0:
        arr[i] = 0
    elif i < count1:
        arr[i] = 1
    else:
        arr[i] = 2

print('Sorted array: ', arr)