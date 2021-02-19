# Given an array of N elements, 
# the task is to minimize the maximum difference of adjacent elements by inserting at most K elements in the array.

# Examples:

# Input: arr = [2, 6, 8] K = 1
# Output: 2
# Explanation: After insertion of 4 in between 2 and 6, the array becomes [2, 4, 6, 8]. 
# In this case the maximum difference between any adjacent element is 2, which is the minimum that can be.

# Input: arr = [3, 12] K = 2
# Output: 3
# Explanation: After insertion of 6 and 9 in between 3 and 12, the array becomes [3, 6, 9, 12]. 
# In this case the maximum difference between any adjacent element is 3, which is the minimum that can be.

# ***************************************************************************************************

def minMaxDiff(arr, n, k):
 
    max_adj_dif = float('-inf')

    for i in range(n - 1):
        max_adj_dif = max(max_adj_dif, abs(arr[i] - arr[i + 1]))
 
    if (max_adj_dif == 0):
        return 0

    best = 1
    worst = max_adj_dif
     
    while (best < worst):
        mid = (best + worst) // 2
 
        required = 0
 
        for i in range(n - 1):
            required += (abs(arr[i] - arr[i + 1]) - 1) // mid
             

        if (required > k):
            best = mid + 1

        else:
            worst = mid
 
    return worst
 
arr = list(map(int, input('Enter array: ').split(' ')))
n = len(arr)
k = int(input('Enter k : '))
 
print(minMaxDiff(arr, n, k))
