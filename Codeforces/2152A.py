def solve():
    n = int(input())
    store = list(map(int,input().split()))
    store.sort(reverse=True)
    unique = set()
    
    for i in store:
        unique.add(i)

    dist = list(unique)
    dist.sort(reverse=True)
    op = 0
    start = [0] * n

    for i in range(0,len(dist)-1):
        incre = dist[i]-dist[i+1]
        op += 1
        second_op = True

        for j in range(0,n):
            start[j] += incre

            if store[j] == dist[i+1]:
                start[j] = 0

                if second_op:
                    op += 1
                    second_op = False

    for i in range(0,n):
        start[i] += dist[len(dist)-1]
    
    op += 1

    if start == store:
        print(op)

tc = int(input())

for _ in range(tc):
    solve()