# Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. 
# Sort the first array A1[ ] such that all the relative positions of the elements in the first array are the same 
# as the elements in the second array A2[ ].

# Examples:

# Input: N = 11 M = 4
# A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
# A2[] = {2, 1, 8, 3}
# Output: 2 2 1 1 8 8 3 5 6 7 9

# Input: N = 11  M = 4
# A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
# A2[] = {99, 22, 444, 56}
# Output: 1 1 2 2 3 5 6 7 8 8 9

# ***************************************************************************************************

def relativeSort (A1, N, A2, M):
    freq_dict = dict()
    new_sort = []

    for i in A1:
        if i in freq_dict.keys():
            freq_dict[i] += 1
        else:
            freq_dict[i] = 1


    for i in A2:
        if i in freq_dict.keys():
            for _ in range(freq_dict[i]):
                new_sort.append(i)

            freq_dict.pop(i)

    freq_dict = sorted(freq_dict.items())

    for i in freq_dict:
        for j in range(i[1]):
            new_sort.append(i[0])

    return new_sort


arr1 = list(map(int, input('Enter list 1: ').split(' ')))
arr2 = list(map(int, input('Enter list 2: ').split(' ')))

print('The sorted array is ', relativeSort(arr1, len(arr1), arr2, len(arr2)))

