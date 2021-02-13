# Given arrival and departure times of all trains that reach a railway station, 
# the task is to find the minimum number of platforms required for the railway station so that no train waits. 
# We are given two arrays which represent arrival and departure times of trains that stop.

# Examples: 

# Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00} 
# dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00} 
# Output: 3 
# Explantion: There are at-most three trains at a time (time between 11:00 to 11:20)

# Input: arr[] = {9:00, 9:40} 
# dep[] = {9:10, 12:00} 
# Output: 1 
# Explantion: Only one platform is needed. 

# ***************************************************************************************************

arr = [900, 940, 950, 1100, 1500, 1800]
dep = [910, 1200, 1120, 1130, 1900, 2000]

arr.sort()
dep.sort()

n = len(arr)
actual = 1
plat = 1

i = 1
j = 0
while (i < n and j < n):
    if arr[i] <= dep[j]:
        plat += 1
        i += 1
    elif arr[i] > dep[j]:
        plat -= 1
        j += 1

    actual = max(actual, plat)

print('Platforms needed are: ', actual)