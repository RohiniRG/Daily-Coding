def checkValid(row, column, m, n, path, visited, possiblePath):
    if (row == -1 or column == -1 or row == n or column == n or 
        visited[row][column] or m[row][column] == 0):
        return False
    return True


def findPathUtil(row, column, m, n, path, visited, possiblePath):
    if not checkValid(row, column, m, n, path, visited, possiblePath):
        return
    
    if row == n-1 and column == n-1:
        possiblePath.append(path)
        return

    visited[row][column] = True

    # DOWN
    if checkValid(row+1, column, m, n, path, visited, possiblePath):
        path+='D'
        findPathUtil(row+1, column, m, n, path, visited, possiblePath)
        path = path[:-1]

    # LEFT
    if checkValid(row, column-1, m, n, path, visited, possiblePath):
        path+='L'
        findPathUtil(row, column-1, m, n, path, visited, possiblePath)
        path = path[:-1]

    # RIGHT
    if checkValid(row, column+1, m, n, path, visited, possiblePath):
        path+='R'
        findPathUtil(row, column+1, m, n, path, visited, possiblePath)
        path = path[:-1]

    # UP
    if checkValid(row-1, column, m, n, path, visited, possiblePath):
        path+='U'
        findPathUtil(row-1, column, m, n, path, visited, possiblePath)
        path = path[:-1]

    visited[row][column] = False


def findPath(m, n):
    path = ""
    visited = [[False for _ in range(n) ]for _ in range(n)]
    possiblePath = []

    findPathUtil(0, 0, m, n, path, visited, possiblePath)

    for i in range(len(possiblePath)):
        print(possiblePath[i], end = " ")



if _name_ == "_main_":
     
    m = [ [ 1, 0, 0, 0 ],
          [ 1, 1, 0, 1 ],
          [ 1, 1, 0, 0 ],
          [ 0, 1, 1, 1 ] ]
    n = len(m)  
    findPath(m, n)

