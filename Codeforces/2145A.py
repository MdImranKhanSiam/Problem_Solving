tc = int(input())

for _ in range(tc):
    n = int(input())
    result = -1

    if n % 3 == 0:
        result = 0
    else:
        result = (((n//3)+1)*3)-n

    print(result)