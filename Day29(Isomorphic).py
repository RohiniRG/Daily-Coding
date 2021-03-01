# Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
# Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible
# for every character of str1 to every character of str2 while preserving the order.

# Examples:

# Input:  str1 = "aab", str2 = "xxy"
# Output: True
# 'a' is mapped to 'x' and 'b' is mapped to 'y'.

# Input:  str1 = "aab", str2 = "xyz"
# Output: False
# One occurrence of 'a' in str1 has 'x' in str2 and 
# other occurrence of 'a' has 'y'.

# ***************************************************************************************************

def areIsomorphic(str1,str2):
        if len(str1) == len(str2):
            mapping = dict()
            n = len(str1)
            
            for i in range(n):
                if str1[i] in mapping:
                    if mapping[str1[i]] != str2[i]:
                        return False
                else:
                    if str2[i] in mapping.values():
                        return False
                    mapping[str1[i]] = str2[i]
        else:            
            return False
        return True


str1 = input('Enter string 1: ')
str2 = input('Enter string 2: ')
print(areIsomorphic(str1, str2))