# Given an set of positive integers. Find the maximum XOR subset value in the given set. Expected time complexity O(n).

# Expected Time Complexity : O(N*Log(max(arr[i])))
# Expected Auxiliary Space : O(1)
 
# Contraints :
# 1 <= N <= 10^5
# 1 <= arr[i] <= 10^6

# ***************************************************************************************************

INT_BITS=32


def maxSubarrayXOR(sett,n): 
	index = 0

	for i in range(INT_BITS-1,-1,-1): 

		maxInd = index 
		maxEle = -2147483648
		for j in range(index,n): 

			if ( (sett[j] & (1 << i)) != 0
					and sett[j] > maxEle ): 
				
				maxEle = sett[j] 
				maxInd = j 

		if (maxEle ==-2147483648): 
			continue

		temp=sett[index] 
		sett[index]=sett[maxInd] 
		sett[maxInd]=temp 

		maxInd = index 

		for j in range(n): 
			if (j != maxInd and
			(sett[j] & (1 << i)) != 0): 
				sett[j] = sett[j] ^ sett[maxInd] 
		
		index=index + 1

	res = 0
	for i in range(n): 
		res =res ^ sett[i] 
	return res 

sett = [9, 8, 5] 
n =len(sett) 

print("Max subset XOR is ", end="") 
print(maxSubarrayXOR(sett, n)) 
