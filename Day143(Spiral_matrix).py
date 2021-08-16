def spirallyTraverse(matrix, r, c): 
    soln = []
    m = 0 # row 
    n = 0 # col
    
    while (m < r and n < c):
        for i in range(n, c):
            soln.append(matrix[m][i])
        m += 1
        
        for i in range(m, r):
            soln.append(matrix[i][c-1])
        c -= 1
        
        if m < r:
            for i in range(c-1, n-1, -1):
                soln.append(matrix[r-1][i])
            r -= 1
        
        if n < c:
            for i in range(r-1, m-1, -1):
                soln.append(matrix[i][n])
            n += 1
        
    return soln
    

matrix = [[1, 2, 3, 4],
          [5, 6, 7, 8],
          [9, 10, 11, 12],
          [13, 14, 15, 16]]

print('The spiral traversal is : ', spirallyTraverse(matrix, 4, 4))

