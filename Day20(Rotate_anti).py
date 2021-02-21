# Given a square matrix of size N x N. 
# The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

# Examples:

# Input:
# N = 3 
# matrix[][] = {{1, 2, 3},
#               {4, 5, 6}
#               {7, 8, 9}}
# Output: 
# Rotated Matrix:
# 3 6 9
# 2 5 8
# 1 4 7

# Input:
# N = 2
# matrix[][] = {{1, 2},
#               {3, 4}}
# Output: 
# Rotated Matrix:
# 2 4
# 1 3

# ***************************************************************************************************

def anti_rotate(mat, N):
    for i in range(N//2):
        for j in range(i, N-i-1):
            temp = mat[i][j]
            mat[i][j] = mat[j][N-i-1]
            mat[j][N-i-1] = mat[N-i-1][N-j-1]
            mat[N-i-1][N-j-1] = mat[N-j-1][i]
            mat[N-j-1][i] = temp


matrix = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]

anti_rotate(matrix, len(matrix))
print('Anti-clockwise rotated matrix is: 'matrix)