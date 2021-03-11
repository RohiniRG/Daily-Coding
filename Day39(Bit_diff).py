# You are given two numbers A and B. 
# The task is to count the number of bits needed to be flipped to convert A to B.

# Examples :

# Input : a = 10, b = 20
# Output : 4
# Binary representation of a is 00001010
# Binary representation of b is 00010100
# We need to flip highlighted four bits in a
# to make it b.

# Input : a = 7, b = 10
# Output : 3
# Binary representation of a is 00000111
# Binary representation of b is 00001010
# We need to flip highlighted three bits in a
# to make it b.

# ***************************************************************************************************

def countBitsFlip(a,b):
    ans = a ^ b
    
    count = 0
    while ans:
        count += 1
        ans &= (ans-1)
            
    return count


one = int(input('Enter 1st number: '))
two = int(input('Enter 2nd number: '))
print('The number of bits to be flipped: ', countBitsFlip(one, two))