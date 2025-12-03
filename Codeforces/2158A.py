tc = int(input())

for _ in range(tc):
    n = int(input())
    y,r = list(map(int,input().split()))
    suspended = r+(y//2)
    result = min(n,suspended)
    print(result)