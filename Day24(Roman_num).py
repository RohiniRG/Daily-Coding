# Given a number, find its corresponding Roman numeral. 
# Examples: 

# Input : 9
# Output : IX

# Input : 40
# Output : XL

# Input :  1904
# Output : MCMIV

# ***************************************************************************************************

def convertRoman(n):
    roman_str = ''
    while n:
        if n >= 1000:
            n -= 1000
            roman_str += 'M'
        elif n >= 900:
            n -= 900 
            roman_str += 'CM'
        elif n >= 500:
            n -= 500
            roman_str += 'D'
        elif n >= 400:
            n -= 400
            roman_str += 'CD'
        elif n >= 100:
            n -= 100
            roman_str += 'C'
        elif n >= 90:
            n -= 90
            roman_str += 'XC'
        elif n >= 50:
            n -= 50
            roman_str += 'L'
        elif n >= 40:
            n -= 40
            roman_str += 'XL'
        elif n >= 10:
            n -= 10
            roman_str += 'X'
        elif n >= 9:
            n -= 9
            roman_str += 'IX'
        elif n >= 5:
            n -= 5
            roman_str += 'V'
        elif n >= 4:
            n -= 4
            roman_str += 'IV'
        else:
            n -= 1
            roman_str += 'I'
    
    return roman_str

num = int(input('Enter decimal: '))
print('Roman Number is: ', convertRoman(num))