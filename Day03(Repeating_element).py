# Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest. 

# Examples: 

# Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
# Output: 5 [5 is the first element that repeats]

# Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
# Output: 6 [6 is the first element that repeats]

# ***************************************************************************************************

array = list(map(int, input("Enter array: ").split(' ')))
count_dict = dict()

for i in range(len(array)):
    if array[i] in count_dict.keys():
        count_dict[array[i]] += 1
    else:
        count_dict[array[i]] = 1
    
flag = 1
for i in array:
    if count_dict[i] > 1:
        print(f'{i} is the first element that repeats')
        flag = 0
        break

if flag:
    print('No element found repeating')
