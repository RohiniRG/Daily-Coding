# Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. 
# Find whether element x is present in the matrix or not.

# Examples:

# Input:
# n = 3, m = 3, x = 62
# matrix[][] = {{ 3, 30, 38},
#               {36, 43, 60},
#               {40, 51, 69}}
# Output: 0
# Explanation:
# 62 is not present in the matrix, 
# so output is 0.

# Input:
# n = 1, m = 6, x = 55
# matrix[][] = {{18, 21, 27, 38, 55, 67}}
# Output: 1
# Explanation: 55 is present in the matrix.

# ***************************************************************************************************

def search(matrix, n, m, x): 
	p = 0   # row (n)
	q = m-1 # col (m)
	
	while (p < n and q >= 0):
	    if matrix[p][q] < x:
	        p += 1
	    elif matrix[p][q] > x:
	        q -= 1
	    else:
	        return 1


matrix = [[ 3, 30, 38],
          [36, 43, 60],
          [40, 51, 69]]

x = int(input('Enter key: '))

ans = search(matrix, len(matrix), len(matrix[0]), x)

if ans == 1:
    print('Found')
else:
    print('Not found')