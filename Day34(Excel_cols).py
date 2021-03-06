# Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
# For N =1 we have column A, for 27 we have AA and so on.

# Note: The alphabets are all in uppercase.

# Example:

# Input:
# N = 51
# Output: AY

# ***************************************************************************************************

def ExcelColumn(N):
    col = ''
    count = 0
    while N:
        if (N - 26) <= 0:
            break

        N = N - 26
        # print('N ',N)
        count += 1
        # print('count ',count)
        # print()

        if N <= 26:
            col += chr(N+64)
            # print(col)
            if count > 0:
                N = count
                count = 0
                continue

    col += chr(N+64)
    return col[::-1]


col_no = input('Enter column number: ')
print('The column name is: ',ExcelColumn(col_no))