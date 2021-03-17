# Given an unsigned integer N. The task is to swap all odd bits with even bits.

# Example 1:

# Input: N = 23
# Output: 43
# Explanation: 
# Binary representation of the given number 
# is 00010111 after swapping 
# 00101011 = 43 in decimal.

# Input: N = 2
# Output: 1

# ***************************************************************************************************

def swapper(x):
    even_bits = x & 0xAAAAAAAA
  
    odd_bits = x & 0x55555555
      
    even_bits >>= 1
      
    odd_bits <<= 1 
  
    return (even_bits | odd_bits)  
  

num = int(input('Enter number: '))
print('After swapping: ', swapper(num))
