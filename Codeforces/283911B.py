def min_binary_search(store,target):
    Index = 0
    low = 0
    mid = 0
    high = len(store)-1
    # print(f'For {target}: ', end=" ")

    while low <= high:
        mid = int((low+high)/2)
        Index = mid

        # print(mid, end=" ")

        if store[mid] == target:
            break

        if target < store[mid]:
            high = mid-1

        if target > store[mid]:
            low = mid+1
        
    # print()

    # print(f'Index: {Index}')

    return Index

n, k = list(map(int,input().split()))
store = list(map(int,input().split()))
query = list(map(int,input().split()))

for target in query:
    index = min_binary_search(store,target)
    current = n

    for i in range(index,-1,-1):
        if store[i] <= target:
            current = i
            break

    result = 0

    for iter in range(current,n):
        if store[iter] == store[current]:
            result = iter+1
        else:
            break
        
    print(f'{result}')
    