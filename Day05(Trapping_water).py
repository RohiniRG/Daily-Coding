# Given n non-negative integers representing an elevation map where the width of each bar is 1, 
# compute how much water it is able to trap after raining.

# Examples:  

# Input: arr[]   = {2, 0, 2}
# Output: 2
# Explanation:
# We can trap 2 units of water in the middle gap.

# Input: arr[]   = {3, 0, 2, 0, 4}
# Output: 7
# Explanation:
# We can trap "3 units" of water between 3 and 2,"1 unit" on top of bar 2 and "3 units" between 2 and 4. 

# ***************************************************************************************************

arr = list(map(int, input('Enter list: ').split(' ')))

l_max = 0
r_max = 0

start = 0
end = len(arr)-1

sum = 0
while start <= end:
    if arr[start] < arr[end]:
        if arr[start] > l_max:
            l_max = arr[start]
        else:
            sum += l_max-arr[start]
        start += 1

    else:
        if arr[end] > r_max:
            r_max = arr[end]
        else:
            sum += r_max-arr[end]
        end -= 1

print(f'Water trapped is {sum} units')
