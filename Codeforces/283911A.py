def Binary_Search(store,target):
    found = False
    low = 0
    mid = 0
    high = len(store)-1

    while low <= high:
        mid = int((low+high)/2)

        if store[mid] == target:
            found = True
            break

        if target < store[mid]:
            high = mid-1

        if target > store[mid]:
            low = mid+1

    return found

n, k = list(map(int,input().split()))

store = list(map(int,input().split()))

targets = list(map(int,input().split()))

for target in targets:
    if Binary_Search(store,target):
        print('YES')
    else:
        print('NO')
    