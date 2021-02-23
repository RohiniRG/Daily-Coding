# Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

# Example:

# Input:
# n = 4, m = 4
# M[][] = {{0 1 1 0},
#          {1 1 1 1},
#          {1 1 1 1},
#          {1 1 0 0}}
# Output: 8
# Explanation: For the above test case the matrix will look like
# 0 1 1 0
# 1 1 1 1
# 1 1 1 1
# 1 1 0 0
# the max size rectangle is 
# 1 1 1 1
# 1 1 1 1
# and area is 4 *2 = 8.

# ***************************************************************************************************

def maxHist(row):
        result = []
        top_val = 0
        max_area = 0
        area = 0  
        i = 0
        while (i < len(row)):
            if (len(result) == 0) or (row[result[-1]] <= row[i]):
                result.append(i)
                i += 1
            else:
                top_val = row[result.pop()]
                area = top_val * i
 
                if (len(result)):
                    area = top_val * (i - result[-1] - 1)
                max_area = max(area, max_area)

        while (len(result)):
            top_val = row[result.pop()]
            area = top_val * i
            if (len(result)):
                area = top_val * (i - result[-1] - 1)
            max_area = max(area, max_area)
 
        return max_area
 

def maxArea(M):
    result = maxHist(M[0])

    for i in range(1, len(M)):
        for j in range(len(M[i])):
            if M[i][j]:
                M[i][j] += M[i - 1][j]
        result = max(result, maxHist(M[i]))

    return result


M = [[0, 1, 1, 0],
    [1, 1, 1, 1],
    [1, 1, 1, 1],
    [1, 1, 0, 0]]
print('Max area in binary matrix is: ', maxArea(M))