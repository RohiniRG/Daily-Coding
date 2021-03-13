# Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
# Note: If there is no set bit in the integer N, then return 0 from the function.  

# Examples:

# Input: N = 18
# Output: 2
# Explanation: Binary representation of 
# 18 is 010010,the first set bit from the 
# right side is at position 2.

# Input: N = 12 
# Output: 3 
# Explanation: Binary representation 
# of  12 is 1100, the first set bit 
# from the right side is at position 3.

# ***************************************************************************************************

def getFirstSetBit(n):
    pos = 0
    while n != 0:
        pos += 1
        # print('Pos: ', pos)
        if n & 1 != 0:
            # print('Found n ', n)
            return pos
        n = n >> 1

    return 0


num = input('Enter a number: ')
print(f'The first set bit from right for {num} is at position {getFirstSetBit(18)}')