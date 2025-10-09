n = int(input())
array = list(map(int,input().split()))
array.sort()
k = int(input())

for _ in range(k):
    target1, target2 = list(map(int,input().split()))
    low = 0
    mid = 0
    high = n-1
    range1 = -1
    range2 = -1

    while low <= high:
        mid = (low+high)//2

        if array[mid] >= target1:
            high = mid-1
            range1 = mid
        else:
            low = mid+1

    low = 0
    high = n-1

    while low <= high:
        mid = (low+high)//2

        if array[mid] <= target2:
            low = mid+1
            range2 = mid
        else:
            high = mid-1

    result = 0

    # print(f'Range1: {range1}, Range2: {range2}')

    if range1 != -1 and range2 != -1:
        result = (range2-range1)+1
    
    print(result)