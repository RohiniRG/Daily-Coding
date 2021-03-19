# Given an array with repeated elements, the task is to find the maximum distance two occurrences of an element.

# Examples:

# Input : arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}
# Output: 10
# Explanation:
# maximum distance for 2 is 11-1 = 10 
# maximum distance for 1 is 4-2 = 2 
# maximum distance for 4 is 10-5 = 5
# 
# ***************************************************************************************************
 
def maxDistance(arr, n):
        start_i = dict()
        
        max_dist = 0
        for i in range(n):
            
            if arr[i] in start_i.keys():
                dist = i - start_i[arr[i]]
                
                if dist > max_dist:
                    max_dist = dist
                    
            else:
                start_i[arr[i]] = i
                
        return max_dist 


l1 = list(map(int, input('Give array: ').split(' ')))

print('Maximum distance between 2 repeating elements: ', maxDistance(l1, len(l1)))
