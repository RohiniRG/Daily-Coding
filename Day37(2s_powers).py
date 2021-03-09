# Given a positive integer N. The task is to check if N is a power of 2. 
# More formally, check if N can be expressed as 2x for some x.

# Examples:

# Input: N = 1
# Output: true
# Explanation: 1 is equal to 2 raised to 0 (20 == 1).

# Input: N = 98
# Output: false
# Explanation: 
# 98 cannot be obtained by any power of 2.

# ***************************************************************************************************
def isPowerofTwo(n):
    i = 1

    while i < n:
        i = i << 1
        # print(i)

    if i^n == 0:
        return True
    
    return False


num = int(input('Enter a number: '))

if isPowerofTwo(num):
    print(f'{num} is a power of 2')
else:
    print(f'{num} is not a power of 2')

