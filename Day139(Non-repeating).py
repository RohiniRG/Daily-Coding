def singleNumber(nums):
    nums.sort()
    
    i = 0
    while i+1<len(nums):
        if nums[i] == nums[i+1]:
            nums.pop(i)
            nums.pop(i)
        else:
            i += 1
            
    return nums


N = input('Enter N: ')
arr = []
for i in range(N):
    each = input('Enter element: ')
    arr.append(each)

print('The numbers are: ', singleNumber(arr))

