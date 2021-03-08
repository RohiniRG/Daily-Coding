# Given a number N and a bit number K, check if Kth bit of N is set or not.

# Examples:

# Input: N = 4, K = 0
# Output: No
# Explanation: Binary representation of 4 is 100, 
# in which 0th bit from LSB is not set. 
# So, return false.

# Input: N = 4, K = 2
# Output: Yes
# Explanation: Binary representation of 4 is 100, 
# in which 2nd bit from LSB is set. 
# So, return true.

# ***************************************************************************************************

def checkKthBit(n, k):
    check = n & (1 << k)
    return check

num = int(input('Enter number: '))
pos = int(input('Enter bit position: '))

res = checkKthBit(num, pos)

if res == 1:
    print(f'Bit at {pos} position of {num} is set')
else:
    print(f'Bit at {pos} position of {num} is unset')