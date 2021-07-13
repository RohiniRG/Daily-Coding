def checkPlacement(gap, li, cows):
    prev_pos = 0
    cows_placed = 1

    for i in range(len(li)):
        if cows_placed < cows:
            if li[i] - li[prev_pos] >= gap:
                prev_pos = i
                cows_placed += 1

        if cows_placed >= cows:
            return 1
    return 0


def aggcows(li, cows):
    li.sort()
    low = 1
    high = li[-1]
    max_dist = 1

    while low <= high:
        gap = int(low + ((low+high)/2))

        if (checkPlacement(gap, li, cows)):
            low = gap + 1

            if gap > max_dist: 
                max_dist = gap
                
        else:
            high = gap - 1

    return max_dist


li = [1, 2, 9, 4, 8]
cows = 3
print('The distance should be: ' aggcows(li, cows))

