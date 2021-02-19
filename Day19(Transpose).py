# Write a program to find the transpose of a square matrix of size N*N. 
# Transpose of a matrix is obtained by changing rows to columns and columns to rows.

# Example:

# Input:
# N = 4
# mat[][] = {{1, 1, 1, 1},
#            {2, 2, 2, 2}
#            {3, 3, 3, 3}
#            {4, 4, 4, 4}}
# Output: 
# {{1, 2, 3, 4},  
#  {1, 2, 3, 4}  
#  {1, 2, 3, 4}
#  {1, 2, 3, 4}} 

# Input:
# N = 2
# mat[][] = {{1, 2},
#            {-9, -2}}
# Output:
# {{1, -9}, 
#  {2, -2}}

# ***************************************************************************************************

def transpose(matrix, n):
    for i in range(n):
        for j in range(i+1, n):
            if i == j:
                continue
            else:
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
                
    return matrix


mat = [[1, 1, 1, 1],
       [2, 2, 2, 2],
       [3, 3, 3, 3],
       [4, 4, 4, 4]]

l = len(mat)

print('Transpose: ', transpose(mat, l))