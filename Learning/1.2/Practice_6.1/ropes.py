def cuts(ropes,k,length):
    sum = 0

    for rope in ropes:
        sum += rope//length

        if sum >= k:
            break

    return sum

n, k = list(map(int,input().split()))
ropes = []

for _ in range(n):
    ropes.append(int(input()))

low = 0
mid = 0
high = int(1e7+9)
result = 0

while low <= high:
    mid = round((low+high)/2,7)

    if cuts(ropes,k,mid) >= k:
        result = mid
        low = mid+0.0000001
    else:
        high = mid-0.0000001

print(result)