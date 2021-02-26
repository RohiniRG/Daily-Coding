# You are given a string s. You need to find the missing characters in the string to make a panagram.
# Note: The output characters will be lowercase and lexicographically sorted.

# Examples:

# Input:
# s = Abcdefghijklmnopqrstuvwxy
# Output: z

# Input:
# s = Abc
# Output: defghijklmnopqrstuvwxyz

# ***************************************************************************************************

def missingChar(s):
    s = s.lower()
    freq = [1 for i in range(26)]

    for i in s:
        freq[ord(i)-97] = 0
        
    string = ''
    for i in range(len(freq)):
        if freq[i] == 1:
            string += chr(i+97)
    
    if string != '':
        return string
    return -1

print('Missing character is: ', missingChar('Abcdefghijklmnopqrstuvwxy'))