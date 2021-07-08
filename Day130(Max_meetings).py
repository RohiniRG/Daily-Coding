def maximumMeetings(n, start, end):
    newTimings = [(start[i], end[i]) for i in range(n)]
    newTimings.sort(key=lambda x: x[1])
    # print(newTimings)

    count = 0
    maxi = 0
    for i in range(n):
        if newTimings[i][0] > maxi:
            count += 1
            maxi = newTimings[i][1]

    return count
        

N = 8
S = [75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924]
F = [112960, 114515, 81825, 93424, 54316, 35533, 73383, 160252]

newTimings = [(S[i], F[i]) for i in range(N)]
print('Maximum meetings : ', maximumMeetings(N, S, F))

