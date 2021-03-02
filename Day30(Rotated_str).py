# Given two strings s1 and s2. 
# The task is to check if s2 is a rotated version of the string s1. 
# The characters in the strings are in lowercase.

# Examples:

# Input:
# geeksforgeeks
# forgeeksgeeks
# Output: 1
# Explanation: s1 is geeksforgeeks, s2 is forgeeksgeeks. Clearly, s2 is a rotated 
# version of s1 as s2 can be obtained by left-rotating s1 by 5 units.
 
# Input:
# mightandmagic
# andmagicmigth
# Output: 0
# Explanation: Here with any amount of rotation s2 can't be obtained by s1.

# ***************************************************************************************************

def areRotations(s1,s2):
        if len(s1) == len(s2):
            strings = s1+s1
            if s2 in strings:
                return True
            
        return False


str1 = input('Enter string1: ')
str2 = input('Enter string2: ')
print(areRotations(str1, str2))
