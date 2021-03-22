# Given an array of integers, sort the array according to frequency of elements. 
# That is elements that have higher frequency come first. 
# If frequencies of two elements are same, then smaller number comes first.

# Examples:

# Input:
# N = 5
# A[] = {5,5,4,6,4}
# Output: 4 4 5 5 6

# Input:
# N = 5
# A[] = {9,9,9,2,5}
# Output: 9 9 9 2 5

# ***************************************************************************************************

def sortByFreq(a, n):
    freq=[0 for i in range(max(a)+1)]
    
    hash_for_freq=[ [] for i in range(n+1) ]

    for num in a:
        freq[num]+=1
        
    for i in range(max(a)+1):
        if(freq[i]):
            hash_for_freq[freq[i]].append(i)

    l = []
    for i in range(n,0,-1):
        for num in hash_for_freq[i]:
            for j in range(i):
                l.append(num)
                
    return l


arr = list(map(int, input('Enter list: ').split(' ')))
print(sortByFreq(arr, len(arr)))
