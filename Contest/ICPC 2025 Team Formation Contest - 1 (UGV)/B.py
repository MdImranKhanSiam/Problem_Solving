def check(number):
    for i in str(number):
        if i == '0':
            return False

    first = True
    previous = -1

    for i in str(number):
        if first == True:
            first = False
            previous = i
        else:
            if i == previous:
                return False
            
            previous = i

    return True


def sum(number):
    result = 0

    for i in str(number):
        result += int(i)

    return result

s = int(input())
low = 0
mid = 0
high = int(2e90)
result = 0

while low <= high:
    mid = (low+high)//2

    if( sum(mid) <= s ):
        if check(mid):
            result = mid
        low = mid+1
    else:
        high = mid-1

print(result)


