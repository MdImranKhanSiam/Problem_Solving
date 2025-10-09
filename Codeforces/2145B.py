tc = int(input())

for _ in range(tc):
    n, k = list(map(int,input().split()))
    moves = input()
    top = 0
    bottom = 0
    unknown = 0
    deck = ['+'] * n

    for i in moves:
        if i == '0':
            top += 1
        elif i == '1':
            bottom += 1
        else:
            unknown += 1

    for i in range(0,top):
        deck[i] = '-'

    for i in range(n-1,n-1-bottom,-1):
        deck[i] = '-'

    left = 0

    for i in range(n):
        if left == unknown:
                break
        
        if deck[i] != '-':
            deck[i] = '?'
            left += 1

    left = 0

    for i in range(n-1,-1,-1):
        if left == unknown:
                break
        
        if deck[i] != '-':
            deck[i] = '?'
            left += 1

    question = 0

    for i in deck:
         if i == '?':
            question += 1

    if unknown == n or question == 1:
         deck = ['-'] * n

    for i in deck:
        print(i,end="")

    print()