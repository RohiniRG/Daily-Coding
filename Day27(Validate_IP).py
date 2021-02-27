# The generalized form of an IPv4 address is (0-255).(0-255).(0-255).(0-255). 
# Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.

# Examples:

# Input:
# ip = 222.111.111.111
# Output: 1

# Input:
# ip = 5555..555
# Output: 0
# Explanation: 5555..555 is not a valid
# ip address, as the middle two portions
# are missing.

# ***************************************************************************************************

def isValid(s):
    last = 0
    dot = 0
    
    if s.count('.') == 3:
        for i in range(len(s)):
            
            if s[i] == '.':
                dot += 1
                req = s[last:i]
                
                if req.isdigit():
                    if 0 <= int(req) <= 255:
                        if (req.startswith('0') and len(req) > 1): 
                            return 0
                        last = i+1
                    else:
                        return 0
                else:
                    return 0
            
            if dot == 3:
                req = s[i+1:]
                
                if req.isdigit():
                    if 0 <= int(req) <= 255:
                        if (req.startswith('0') and len(req) > 1): 
                            return 0
                    else:
                        return 0
                else:
                    return 0
                    
                return 1
                
    else:
        return 0
        
    return 1

ip = input('IP address: ')

if (isValid(ip)):
    print('Valid')
else:
    print('Not Valid')
