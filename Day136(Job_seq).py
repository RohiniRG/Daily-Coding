def JobScheduling(Jobs, n):
    Jobs.sort(key = lambda x: x[2], reverse=True)
    slots = set()

    for i in Jobs:
        if i[1] in slots:
            pass
        else:
            slots.add(i[1])

    sorted(slots)
    newSlots = []
    for i in range(len(slots)):
        newSlots.append(0)

    # print(newSlots)
    profits = 0
    count = 0

    for i in Jobs:
        for j in range(i[1]-1,  -1, -1):
            if not newSlots[j]:
                newSlots[j] = 1
                count += 1
                profits += i[2]
                break

    print('Number of jobs and total profits is: ', count, profits)



arr = [['a', 2, 100], 
       ['b', 1, 19],
       ['c', 2, 27],
       ['d', 1, 25],
       ['e', 3, 15]]
 

JobScheduling(arr, len(arr))

