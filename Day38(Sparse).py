# Check if a given number is Sparse or not.

# Examples :

# Input:  x  = 72
# Output: true
# Explanation:  Binary representation of 72 is 01001000. 
# There are no two consecutive 1's in binary representation

# Input:  x  = 12
# Output: false
# Explanation:  Binary representation of 12 is 1100. 
# Third and fourth bits (from end) are set.

# ***************************************************************************************************

def isSparse(n):
    if n & (n >> 1):
        return False
            
    return True


num = int(input('Enter a number: '))

if isSparse(num):
    print(f'{num} is sparse')
else:
    print(f'{num} is not sparse')