def p(maze):
    for i in range(len(maze)):
        for j in range(len(maze)):
            print(maze[i][j],end="")
        
        print()

tc = int(input())

for _ in range(tc):
    n, k = list(map(int,input().split()))
    maze = []
    
    for i in range(n):
        row = []
        for j in range(n):
            row.append(0)
        
        maze.append(row)

    limit = k

    row = -1
    column = -1

    found = False

    for i in range(n):
        
        if found == True:
            break

        for j in range(n):

            if limit == 0:
                row = i
                column = j
                found = True
                break

            if limit != 0:
                maze[i][j] = 'U'
                limit -= 1

    if row != -1 and column != -1:
        if column < n-1:
            for i in range(column,n-1):
                maze[row][i] = 'R'
            
            maze[row][n-1] = 'L'
        else:
            maze[row][column] = 'D'

        if row < n-1:
            for i in range(row+1,n):
                for j in range(n):
                    if j == n-1:
                        maze[i][j] = 'L'
                    else:
                        maze[i][j] = 'R'
    
    if maze[n-1][n-1] == 'D':
        print('NO')
    else:
        print('YES')
        p(maze)