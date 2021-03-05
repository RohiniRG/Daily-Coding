# Given two strings a and b consisting of lowercase characters.
# The task is to check whether two given strings are an anagram of each other or not. 
# An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
# For example, “act” and “tac” are an anagram of each other.

# Examples:

# Input:
# a = geeksforgeeks, b = forgeeksgeeks
# Output: YES
# Explanation: Both the string have same
# characters with same frequency. So, 
# both are anagrams.

# Input:
# a = allergy, b = allergic
# Output: NO
# Explanation:Characters in both the strings
# are not same, so they are not anagrams.

# ***************************************************************************************************

def isAnagram(a,b):
    letters = [0 for i in range(26)]

    if len(a) == len(b):
        for i in range(len(a)):
            idx = ord(a[i]) - 97
            letters[idx] += 1

        for j in range(len(b)):
            idx = ord(b[j]) - 97
            letters[idx] -= 1

        if any(letters) == 0:
            return 1
    
    return 0

str1 =  input('Enter string1: ')
str2 = input('Enter string2: ')

if (isAnagram(str1, str2)):
    print('ANAGRAM!')
else:
    print('NOT ANAGRAM!')