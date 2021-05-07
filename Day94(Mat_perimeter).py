# Given a matrix mat[][] of n rows and m columns, consisting of 0’s and 1’s. 
# The task is to complete the function findPerimeter which returns an integer denoting the perimeter of sub-figures consisting of only 1’s in the matrix.

# Input : mat[][] = 
#                {
#                  1, 0,
#                  1, 1,
#                }
# Output : 8
# Cell (1,0) and (1,1) making a L shape whose perimeter is 8.


# ***************************************************************************************************

def findWalls(arr, i, j):
    walls = 0
 
    if (i > 0 and mat[i - 1][j]):
        count+= 1
 
    if (j > 0 and mat[i][j - 1]):
        count+= 1
 
    if (i < R-1 and mat[i + 1][j]):
        count+= 1
 
    if (j < C-1 and mat[i][j + 1]):
        count+= 1
 
    return count


def findPerimeter(arr, n, m):
    peri = 0
    for i in range (n):
        for j in range (m-1):
            if arr[i][j]:
                peri += 4 - findWalls(arr, i, j)
                
                
    return peri


mat = [[1,0,0], [1,0,0], [1,0,0]]
print('Perimeter is : ', findPerimeter(mat, len(mat), len(mat[0])))

