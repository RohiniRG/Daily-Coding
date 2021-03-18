# Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
# Two arrays are said to be equal if both of them contain same set of elements, 
# arrangements (or permutation) of elements may be different though.
# Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

# Examples:

# Input:
# N = 5
# A[] = {1,2,5,4,0}
# B[] = {2,4,5,0,1}
# Output: 1
# Explanation: Both the array can be 
# rearranged to {0,1,2,4,5}

# Input:
# N = 3
# A[] = {1,2,5}
# B[] = {2,4,15}
# Output: 0
# Explanation: A[] and B[] have only 
# one common value.

# ***************************************************************************************************

def check(arr1, arr2, n):
    checker = dict()
    # print(checker)

    for i in arr1:
        if i in checker.keys():
            checker[i] += 1
        else:
            checker[i] = 1   

    for i in arr2:
        if i in checker.keys():
            checker[i] -= 1
        else:
            return False

    if any(checker.values()):
        return False

    return True    

        
l1 = list(map(int, input('Enter list 1: ').split(' ')))
l2 = list(map(int, input('Enter list 2: ').split(' ')))

if check(l1, l2, len(l1)):
    print('Lists are equal')
else:
    print('Lists are unequal')
