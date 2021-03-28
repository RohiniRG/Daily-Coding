# Given an array of size n and an integer k, return the count of distinct numbers in all windows of size k.

# Example:

# Input: arr[] = {1, 2, 1, 3, 4, 2, 3};
#        k = 4
# Output: 3 4 4 3

# Explanation:
# First window is {1, 2, 1, 3}, count of distinct numbers is 3
# Second window is {2, 1, 3, 4} count of distinct numbers is 4
# Third window is {1, 3, 4, 2} count of distinct numbers is 4
# Fourth window is {3, 4, 2, 3} count of distinct numbers is 3

# Input: arr[] = {1, 2, 4, 4};
#        k = 2
# Output: 2 2 1

# Explanation:
# First window is {1, 2}, count of distinct numbers is 2
# First window is {2, 4}, count of distinct numbers is 2
# First window is {4, 4}, count of distinct numbers is 1

# ***************************************************************************************************

def countDistinct(A, N, K):
    distinct = []

    i = 0
    for i in range(N-K+1):                                                               
        freq = dict()
        window = A[i:i+K]

        for i in window:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1

        distinct.append(len(freq.keys()))

    return distinct


arr = list(map(int, input('Enter list: ').split(' ')))
key = int(input('Enter a number: '))
print(countDistinct(arr, len(arr), key))
        