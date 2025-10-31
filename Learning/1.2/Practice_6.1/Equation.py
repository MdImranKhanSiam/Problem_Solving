import math

def equation(num):
    result = pow(num,2)+math.sqrt(num)

    return result

target = float(input())
low = 0
mid = -1
high = int(1e5+9)
result = 0

while low <= high:
    mid = (low+high)/2
    
    if equation(mid) <= target:
        result = mid
        low = mid+0.00000000001
    else:
        high = mid-0.00000000001

print(result)