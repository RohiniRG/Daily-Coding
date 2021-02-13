# Given an array of n distinct elements, find the minimum number of swaps required to sort the array.

# Examples: 

# Input : {4, 3, 2, 1}
# Output : 2
# Explanation : Swap index 0 with 3 and 1 with 2 to form the sorted array {1, 2, 3, 4}.

# Input : {1, 5, 4, 3, 2}
# Output : 2

# ***************************************************************************************************

def minSwaps(arr):
	n = len(arr)
	arrpos = [*enumerate(arr)]

	arrpos.sort(key = lambda it : it[1])
	
	vis = {k : False for k in range(n)}

	ans = 0
	for i in range(n):
		if vis[i] or arrpos[i][0] == i:
			continue

		cycle_size = 0
		j = i
		
		while not vis[j]:
			vis[j] = True
			j = arrpos[j][0]
			cycle_size += 1

		if cycle_size > 0:
			ans += (cycle_size - 1)
			
	return ans

arr = list(map(int, input('Enter array: ').split(' ')))
print('Minumum swaps required are: 'minSwaps(arr))


