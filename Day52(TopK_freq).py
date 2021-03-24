# Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. 
# If two numbers have the same frequency then the larger number should be given preference. 

# Examples:

# Input:
# nums = {1,1,1,2,2,3},
# k = 2
# Output: {1, 2}

# Input:
# nums = {1,1,2,2,3,3,3,4},
# k = 2
# Output: {3, 2}
# Explanation: Elements 1 and 2 have the same frequency ie. 2. 
# Therefore, in this case, the answer includes the element 2 as 2 > 1.

# ***************************************************************************************************

def topK(nums, k):
    freq_dict = dict()
    all_nums = list()

    for i in nums:
        if i in freq_dict:
            freq_dict[i] += 1
        else:
            freq_dict[i] = 1

    for key, val in freq_dict.items():
        all_nums.append((key,val))

    all_nums.sort(key=lambda x: x[0], reverse=True)
    all_nums.sort(key=lambda x: x[1], reverse=True)

    top = []
    for i in range(k):
        top.append(all_nums[i][0])

    return top     

    
arr = list(map(int, input('Enter list: ').split(' ')))
top = int(input('Limit of elements to be considered: '))
print(f'Top {top} values are ', topK(arr, top))

