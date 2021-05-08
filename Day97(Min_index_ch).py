# Given a string str and another string patt. 
# Find the character in patt that is present at the minimum index in str.
 
# Examples:

# Input: str = "zsyle", patt = "bjz"
# Output: "z"

# ***************************************************************************************************

def printMinIndexChar(stri, patt):
    hash = dict()
    
    for i in range(len(stri)):
        if stri[i] in hash:
            pass
        else:
            hash[stri[i]] = i
    
    min_ind = 10000
    flag = 0
    
    for i in patt:
        if i in hash:
            ind = hash[i]
            
            if ind < min_ind:
                min_ind = ind
                flag = i

    if flag:
        return flag
    return '$'


string = input('Enter string: ')
pattern = input('Enter pattern: ')
print('The element is: 'printMinIndexChar(stri, patt))
