# Given a number N, print all numbers in the range from 1 to N having exactly 3 divisors. 

# Examples: 

# Input : N = 16
# Output : 4 9
# 4 and 9 have exactly three divisors.
# Divisor

# Input : N = 49
# Output : 4 9 25 49
# 4, 9, 25 and 49 have exactly three divisors.

# ***************************************************************************************************

# prime number squares that lie in the range of N

N = int(input('Enter N: '))

for i in range(2, int(N**(1/2))+1):
    flag = 1
    for j in range(2, int(i**(1/2))+1):
        if i % j == 0:
            # print('Not prime')
            flag = 0
            break

    if flag:
        print(i**2)
    
        
             
