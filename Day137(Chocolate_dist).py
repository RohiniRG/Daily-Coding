def findMinDiff(A, N, M):
    if (M == 0 or N == 0):
        return 0

    A.sort()

    min_diff = A[N - 1] - A[0]

    for i in range(N - M + 1):
        diff = A[i + M - 1] - A[i]

        if diff < min_diff:
            min_diff = diff

    return min_diff


N = 8
M = 5
A = [3, 4, 1, 9, 56, 7, 9, 12]
print('Minimum diff is: ', findMinDiff(A, N, M))

