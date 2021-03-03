# Given a string S, find the length of its longest substring that does not have any repeating characters.

# Examples:

# Input:
# S = geeksforgeeks
# Output: 7
# Explanation: The longest substring
# without repeated characters is "ksforge".

# Input:
# S = abbcdb
# Output: 3
# Explanation: The longest substring is
# "bcd". Here "abcd" is not a substring
# of the given string.

# ***************************************************************************************************

def SubsequenceLength(s):
    if (len(s) == 0 ):
        return 0

    count = 1 
    answer = 1 

    visited = [-1]*256
    visited[ord(s[0])]=0
    
    for end in range(1,len(s)):
        idx = ord(s[end])
        
        if(visited[idx] == -1 or end-count > visited[idx]):
            count+=1
        else:
            answer = max(count, answer)
            count = end - visited[idx]
            
        visited[idx]=end
    return max(count,answer)


stri = input('Enter string: ')
print('The maximum length of non-repeating substring: ', SubsequenceLength(stri))
