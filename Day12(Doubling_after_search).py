# Given an array “a[]” and integer “b”. Find whether b is present in a[] or not. 
# If present, then double the value of b and search again. 
# We repeat these steps until b is not found. Finally we return value of b.

# Examples:

# Input : a[] = {1, 2, 3}
#           b = 1 
# Output :4
# Initially we start with b = 1. Since 
# it is present in array, it becomes 2.
# Now 2 is also present in array b becomes 4 .
# Since 4 is not present, we return 4.

# Input : a[] = {1 3 5 2 12}
#           b = 3 
# Output :6

# ***************************************************************************************************

def binary_search(arr, key):
    low = 0
    high = len(arr)-1

    while low <= high:
        mid = (low+high)//2

        if key < arr[mid]:
            high = mid-1

        elif key > arr[mid]:
            low = mid+1
            
        else:
            # print('present')
            return 1

    return 0
            

a = list(map(int, input('Enter array: ').split(' ')))
a.sort()
b = int(input('Enter b: '))

while(binary_search(a, b)):
    b *= 2

print('b is: ', b)