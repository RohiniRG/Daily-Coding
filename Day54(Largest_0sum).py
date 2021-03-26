# Given an array having both positive and negative integers. 
# The task is to compute the length of the largest subarray with sum 0.

# Examples:

# Input:
# N = 8
# A[] = {15,-2,2,-8,1,7,10,23}
# Output: 5
# Explanation: The largest subarray with
# sum 0 will be -2 2 -8 1 7.

# ***************************************************************************************************

def maxLen(n, arr):
    hash_dict = dict()
    zero_sum = 0
    max_l = 0

    for i in range(len(arr)):
        zero_sum += arr[i]

        if arr[i] == 0 and max_l == 0:
            max_l = 1
  
        if zero_sum == 0:
            max_l = i + 1
  
        if zero_sum in hash_dict:
            max_l = max(max_l, i - hash_dict[zero_sum])
        else:
            hash_dict[zero_sum] = i

    return max_l


a = list(map(int, input('Enter list: ').split(' ')))
print('The maximum length of zero sub array is: ', maxLen(len(a), a))
