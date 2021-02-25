# Given a string str. The task is to find the maximum occurring character in the string str. 
# If more than one character occurs the maximum number of time then print the lexicographically smaller character.

# Examples:

# Input:
# str = testsample
# Output: e
# Explanation: e is the character which
# is having the highest frequency.
# Example 2:

# Input:
# str = output
# Output: t
# Explanation:  t and u are the characters
# with the same frequency, but t is
# lexicographically smaller.

# ***************************************************************************************************

def getMaxOccurringChar(s):
    freq = [0 for i in range(26)]

    for i in s:
        freq[ord(i)-97] += 1
        
    max_f = 0
    letter = None
    for i in range(len(freq)):
        if freq[i] > max_f:
            max_f = freq[i]
            letter = chr(i+97)
    
    print('Max occuring character: ', letter)
        

string = input('Enter string: ')
getMaxOccurringChar(string)