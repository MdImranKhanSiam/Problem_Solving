n, k = list(map(int,input().split()))
array = list(map(int,input().split()))
query = list(map(int,input().split()))

for target in query:
    low = 0
    mid = 0
    high = n-1
    result = n+1

    while low <= high:
        mid = (low+high)//2

        if array[mid] >= target:
            high = mid-1
            result = mid+1
        else:
            low = mid+1

    print(result)