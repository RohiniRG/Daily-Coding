# Given two strings s1 and s2, find if s1 is a substring of s2. 
# If yes, return the index of the first occurrence, else return -1.

# Examples : 

# Input: s1 = "for", s2 = "geeksforgeeks"
# Output: 5
# Explanation:
# String "for" is present as a substring of s2.

# Input: s1 = "practice", s2 = "geeksforgeeks"
# Output: -1.
# Explanation:
# There is no occurrence of "practice" in geeksforgeeks"

# ***************************************************************************************************

def strstr(s,p):
    for i in range(len(s)):
        if p == s[i:i+len(p)]:
            return i
        
    return -1


string = input('Enter string: ')
substr = input('Enter substring: ')
ret = strstr(string, substr)
if ret == -1:
    print('Substring not present')
else:
    print('Substring starts at index ', ret)