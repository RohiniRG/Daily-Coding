def isPowerofTwo(n):
    if (n & n-1 == 0 and n != 0):
        return 1
    return 0


n = input('Enter n: ')
if isPowerofTwo(n):
    print('True')
else:
    print('False')

