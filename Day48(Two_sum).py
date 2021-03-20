# Given an array of positive integers and an integer. 
# Determine whether or not there exist two elements in A whose sum is exactly equal to that integer.

# Examples: 

# Input: arr[] = {0, -1, 2, -3, 1}
#         sum = -2
# Output: -3, 1
# If we calculate the sum of the output,
# 1 + (-3) = -2

# Input: arr[] = {1, -2, 1, 0, 5}
#        sum = 0
# Output: -1
# No valid pair exists.

# ***************************************************************************************************

def keypair(A, N, X):
    new = set()
    
    for i in range(N):
        if (X - A[i]) in new:
            return True
        new.add(A[i])
            
    return False    


arr = list(map(int, input('Enter list: ').split(' ')))
val = input('Enter value to check: ')
print(keypair(arr, len(arr), val))
