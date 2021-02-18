def minMaxDiff(arr, n, k):
 
    max_adj_dif = float('-inf')

    for i in range(n - 1):
        max_adj_dif = max(max_adj_dif, abs(arr[i] - arr[i + 1]))
 
    if (max_adj_dif == 0):
        return 0

    best = 1
    worst = max_adj_dif
     
    while (best < worst):
        mid = (best + worst) // 2
 
        required = 0
 
        for i in range(n - 1):
            required += (abs(arr[i] - arr[i + 1]) - 1) // mid
             

        if (required > k):
            best = mid + 1

        else:
            worst = mid
 
    return worst
 
arr = list(map(int, input('Enter array: ').split(' ')))
n = len(arr)
k = int(input('Enter k : '))
 
print(minMaxDiff(arr, n, k))