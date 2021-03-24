# You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.

# Examples:

# Input:
# n = 6
# arr[] = {0,0,5,5,0,0}
# Output: 6
# Explanation: The 6 subarrays are 
# [0], [0], [0], [0], [0,0], and [0,0].

# Input:
# n = 10
# arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7}
# Output: 4
# Explanation: The 4 subarrays are [-1 -3 4]
# [-2 2], [2 4 6 -12], and [-1 -3 4 -2 2]

# ***************************************************************************************************

def findSubArrays(arr, n):
    zero_sum = 0
    count = 0

    hashmap = dict()

    for i in range(n):
        zero_sum += arr[i]

        if zero_sum in hashmap:           
            hashmap[zero_sum].append(i)      
            num = len(hashmap[zero_sum])          
            count += num-1

        else:
            hashmap[zero_sum] = [i]

        if zero_sum == 0:
            count +=  1

        # print(hashmap)
            
    return count


arr = list(map(int, input('Enter list: ').split(' ')))
print('Total no. of zero sum subarrays are: ', findSubArrays(arr, len(arr)))
