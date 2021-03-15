# Given two numbers M and N. 
# The task is to find the position of the rightmost different bit in the binary representation of numbers.

# Examples: 

# Input: M = 11, N = 9
# Output: 2
# Explanation: Binary representation of the given 
# numbers are: 1011 and 1001, 
# 2nd bit from right is different.

# Input: M = 52, N = 4
# Output: 5

# ***************************************************************************************************

def posOfRightMostDiffBit(m,n):
    pos = 1
    count = 1

    if m & (pos) == 0:
        ans1 = 0
    else:
        ans1 = 1

    if n & (pos) == 0:
        ans2 = 0
    else:
        ans2 = 1

    while(ans1 == ans2):
        count += 1
        pos = pos << 1

        if m & (pos) == 0:
            ans1 = 0
        else:
            ans1 = 1

        if n & (pos) == 0:
            ans2 = 0
        else:
            ans2 = 1
            
    return count


no1 = int(input('Enter a number1: '))
no2 = int(input('Enter a number2: '))
print('Rightmost bit is ', posOfRightMostDiffBit(no1, no2))