# Given a matrix of size R*C. Traverse the matrix in spiral form.

# Examples:

# Input:
# R = 4, C = 4
# matrix[][] = {{1, 2, 3, 4},
#            {5, 6, 7, 8},
#            {9, 10, 11, 12},
#            {13, 14, 15,16}}
# Output: 
# 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

# ***************************************************************************************************

def spirallyTraverse(matrix, r, c): 
    p = 0
    q = 0
    li = []
    
    while p < r and q < c: 
        for i in range(q, c):
            li.append(matrix[p][i])
            # print(matrix[q][i], end = ' ')
        p += 1
        
        for i in range(p, r):
            li.append(matrix[i][c-1])
            # print(matrix[i][r-1], end = ' ')
        c -= 1
        
        if p < r:
            for i in range(c-1, q-1, -1):
                 li.append(matrix[r-1][i])
                # print(matrix[c-1][i], end = ' ')
            r -= 1
            
        if q < c:
            for i in range(r-1, p-1, -1):
                li.append(matrix[i][q])
                # print(matrix[i][r-1], end = ' ')
            q += 1
        
    return li

mat = [[1, 2, 3, 4],
       [5, 6, 7, 8],
       [9, 10, 11, 12],
       [13, 14, 15,16]]

m = len(mat)
n = len(mat[0])

ans = spirallyTraverse(mat, m, n)
for i in range(len(ans)):
    print(ans[i], end=' ')

print()