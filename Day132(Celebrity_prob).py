def celebrity(M, n):
        a = 0
        b = n-1
        
        while a < b:
            # If a know b
            if M[a][b]:
                # a is not a celebrity
                a += 1
                
            # b is not a celebrity
            else:
                b -= 1
                
        
        celebrity = a
        
        known_by = 0
        knows = 0
        for i in range(n):
            if M[i][a] == 1:
                known_by += 1
            
            if M[a][i] == 1:
                knows += 1
        
        if knows == 0 and known_by == n-1:
            return a
            
        return -1


M = [[0, 1, 0],
    [0, 0, 0],
    [0, 1, 0]]
n = 3

print('Celebrity is: ', celebrity(M, n))

