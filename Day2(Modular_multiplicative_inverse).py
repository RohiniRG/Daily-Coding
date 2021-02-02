# Given two integers ‘a’ and ‘m’, find modular multiplicative inverse of ‘a’ under modulo ‘m’.
# The modular multiplicative inverse is an integer ‘x’ such that. 

# a x ≅ 1 (mod m)

# Examples: 

# Input:  a = 3, m = 11
# Output: 4
# Since (4*3) mod 11 = 1, 4 is modulo inverse of 3(under 11).
# One might think, 15 also as a valid output as "(15*3) mod 11" 
# is also 1, but 15 is not in ring {0, 1, 2, ... 10}, so not 
# valid.

# Input:  a = 10, m = 17
# Output: 12
# Since (10*12) mod 17 = 1, 12 is modulo inverse of 10(under 17).

# ***************************************************************************************************

a = int(input('Enter input for a: '))
m = int(input('Enter input for m: '))

val = -1
for i in range(0, m):
    if (i * a) % m == 1:
        val = i
        break

if val >= 0:
    print(f'{val} is modulo inverse of {a} (under {m})')

else:
    print(f'{a} has no modulo inverse (under {m})')

