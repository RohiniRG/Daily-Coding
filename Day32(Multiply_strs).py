# Given two numbers as stings s1 and s2. Calculate their Product.

# Examples:

# Input : num1 = 4154  
#         num2 = 51454
# Output : 213739916 

# Input :  num1 = 654154154151454545415415454  
#          num2 = 63516561563156316545145146514654 
# Output : 41549622603955309777243716069997997007620439937711509062916

# ***************************************************************************************************

def multiplyStrings(s1,s2):
    sign = ''
    if s1[0] == '-' and s2[0] == '-':
        s1 = s1[1:]
        s2 = s2[1:]
    elif s1[0] == '-':
        sign = '-'
        s1 = s1[1:]
    elif s2[0] == '-':
        sign = '-'
        s2 = s2[1:]

    summ = 0
    count = 0

    for i in range(len(s1)-1, -1, -1):
        temp_sum = []
        curr = int(s1[i])
        carry = 0

        for j in range(len(s2)-1, -1, -1):
            v1 = int(s2[j])
            
            temp_prod = (curr * v1)+carry
            temp_prod_str = str(temp_prod)

            temp_sum.insert(0, temp_prod_str[-1])

            if temp_prod > 9:
                carry = temp_prod_str[:len(temp_prod_str)-1]
                carry = int(carry)
            else:
                carry = 0

        if carry > 0:
            carry = str(carry)
            temp_sum.insert(0, carry)

        summ += (int(''.join(temp_sum))) * (10**(count))
        count += 1

    if summ != 0:
        summ = str(summ)
        return sign+summ
    return str(summ)


n1 = input('Enter 1st no: ')
n2 = input('Enter 2nd no: ')
print('Product is: ', multiplyStrings(n1, n2))
