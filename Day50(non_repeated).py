# Find all the non-repeating element in a given array of integers.

# Example 1:

# Input:
# n = 10
# arr[] = {1,1,2,2,3,3,4,5,6,7}
# Output: 4 5 6 7

# Input:
# n = 5
# arr[] = {10,20,40,30,10}
# Output: 20 40 30

# ***************************************************************************************************

def printNonRepeated(arr, n):
    freq = dict()
    distinct = []

    for i in arr:
        if i in freq.keys():
            freq[i] += 1
        else:
            freq[i] = 1

    for i in freq:
        if freq[i] == 1:
            distinct.append(i)
    
    return distinct


print(printNonRepeated([10,20,40,30,10], 5))
