# Show binary-to-gray and gray-to-binary conversions of a number

# ***************************************************************************************************

def b_to_g(n):
    return n^(n>>1)


def g_to_b(n):
    dec = n
    while dec > 0:
        dec = dec >> 1
        n = n^dec 

    return n


number = int(input('Enter number: '))
print(f'Binary to gray equivalent of {number}: ', b_to_g(number))
print(f'Gray to binary equivalent of {number}: ', g_to_b(number))
