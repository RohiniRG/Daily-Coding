# You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

# Examples:

# Input: N = 4
# Output: 5
# Explanation:
# For numbers from 1 to 4.
# For 1: 0 0 1 = 1 set bits
# For 2: 0 1 0 = 1 set bits
# For 3: 0 1 1 = 2 set bits
# For 4: 1 0 0 = 1 set bits
# Therefore, the total set bits is 5.

# Input: N = 17
# Output: 35
# Explanation: From numbers 1 to 17(both inclusive), 
# the total number of set bits is 35.

# ***************************************************************************************************

def countSetBits(n):
    n += 1
    count = 0
    
    x = 2
    while x//2 < n:
        quotient = n//x
        count += quotient * x // 2
        
        remainder = n % x
        if remainder > x//2:
            count += remainder - x//2
        
        x = x*2
    return count


num = int(input('Enter a number: '))
print(f'Number of set bits from 1 to {num} are ',countSetBits(num))