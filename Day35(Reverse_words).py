# Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

# Examples:

# Input:
# S = i.like.this.program.very.much
# Output: much.very.program.this.like.i

# Input:
# S = pqr.mno
# Output: mno.pqr

# ***************************************************************************************************

def reverseWords(S):
    final = []
    curr = 0
    for i in range(len(S)-1, -1, -1):
        if S[i] == '.':
            final.append('.')
            curr = len(S)-i
        else:
            final.insert(curr, S[i])

    finale = ''.join(final)
    return finale


string = input('Enter string: ')
print(reverseWords(string))