def recursion(a,b,c,d):
    global total_recursion
    global min_step

    total_recursion += 1
    
    if total_recursion > 1000:
        return

    N = a
    D = b
    X = c
    Step = d
    
    # print(Step)

    if X > N:
        # print('Yeah')
        return

    if X == N:
        if Step < min_step:
            min_step = Step

    recursion(N,D,int(X*2),Step+1)
    recursion(N,D,int(X+D),Step+1)

tc = int(input())

for i in range(0,tc):
    global total_recursion
    global min_step
    limit = int(1e18)+9
    total_recursion = 0
    min_step = limit
    n, d = list(map(int,input().split()))
    recursion(n,d,1,0)
    if min_step == limit:
        print(-1)
    else:
        print(f'{min_step}')