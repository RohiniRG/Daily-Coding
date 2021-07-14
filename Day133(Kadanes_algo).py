def maxSubArraySum(a,size):
    max_so_far = a[0]
    max_overall = a[0]
    
    for i in range(1, size):
        if max_so_far + a[i] > a[i]:
            max_so_far += a[i]
        else:
            max_so_far = a[i]
        
        if max_so_far > max_overall:
            max_overall = max_so_far
            
    return max_overall


arr = [1,2,3,-2,5]
print('Maximum subarray sum is: ', maxSubArraySum(len(arr), arr))

