def FindMaxSum(a, n):
    if n == 0:
        return 0

    if n == 1:
        return a[0]
    
    if n == 2:
        return max(a[0], a[1])

    findSum = [0]*n
    findSum[0] = a[0]
    findSum[1] = a[1]
    for i in range(2, n):
        findSum[i] = (max(a[i]+findSum[i-2], findSum[i]))

    return findSum[n-1]

arr1 = list(map(int, input('Enter array: ').split(' ')))
n = len(arr1)

max_Sum = FindMaxSum(arr1, n)
print('The maximum sum is: ', max_Sum)