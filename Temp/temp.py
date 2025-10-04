import math

tc = int(input())

for i in range(0,tc):
    n, d = list(map(int,input().split()))
    result = int(1e18)

    for j in range(0,61):
        remain = n-int(pow(2,j))
        
        if remain < 0:
            break
        
        if remain % d == 0:
            moves = int(j+(remain//d))
            result = min(result,moves)

    for j in range(0,100000):
        remain = int(n-(d*j))

        if remain < 0:
            break

        multi = 0

        if remain != 0:
            multi = int(math.log(remain,2))

        if multi % 2 == 0:
            moves = int(j+multi)
            result = min(result,moves)

    print(result)
        

    




9 9 3 2 4 4 8 5 3
2 3 3 4 4 5 8 9 9
si + 1 = 2
9 8 5 4 3 2
0 0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 0 1 1
4 4 4 4 4 4 3 4 4
4 4 4 4 4 4 3 0 4
5 5 5 5 5 5 4 1 5
5 5 5 5 0 0 4 1 5
6 6 6 6 1 1 5 2 6
6 6 0 6 1 1 5 2 0
7 7 1 7 2 2 6 3 1
7 7 1 0 2 2 6 3 1
9 9 3 2 4 4 8 5 3

