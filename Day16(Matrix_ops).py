# Demonstrate different matrix operations

# ***************************************************************************************************

def addition(mat1, n1, m1, mat2, n2, m2):
    sum_arr = []
    if n1 == n2 and m1 == m2:
        for i in range(n1):
            i_arr = []
            for j in range(m1):
                sum = mat1[i][j] + mat2[i][j]
                i_arr.append(sum)
            sum_arr.append(i_arr)
        return sum_arr
    return 'Invalid operation'


def subtraction(mat1, n1, m1, mat2, n2, m2):
    diff_arr = []
    if n1 == n2 and m1 == m2:
        for i in range(n1):
            i_arr = []
            for j in range(m1):
                diff = mat1[i][j] - mat2[i][j]
                i_arr.append(diff)
            diff_arr.append(i_arr)
        return diff_arr
    return 'Invalid operation'


def multiplication(mat1, n1, m1, mat2, n2, m2):
    mult_arr = []
    if m1 == n2:
        for i in range(n1):
            i_arr = []
            for j in range(m2):
                prod = 0
                for k in range(m1):
                    prod += mat1[i][k] * mat2[k][j]
                i_arr.append(prod)
            mult_arr.append(i_arr)
        return mult_arr
    return 'Invalid operation'



n1 = 3
m1 = 3
n2 = 3
m2 = 3

A = [[4, 8, 1],[0, 2, 1],[1, 6, 1]]
B = [[5, 2, 0],[9, 4, 0],[1, 1, 1]]

print('Addition: ', addition(A, n1, m1, B, n2, m2))
print('Subtraction: ', subtraction(A, n1, m1, B, n2, m2))
print('Multiplication: ', multiplication(A, n1, m1, B, n2, m2))