def recktangles(width, height, square):
    total = 0
    row = square//height
    column = square//width
    return int(row*column)

w, h, n = list(map(int,input().split()))
low = 1
mid = 0
high = int(1e19)
result = 0

while low <= high:
    mid = (low+high)//2

    if recktangles(w, h, mid) >= n:
        result = mid
        high = mid-1
    else:
        low = mid+1

print(result)