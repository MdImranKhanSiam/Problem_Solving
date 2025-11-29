def valid(length,row,column):
    if row < 0 or column < 0 or row >= length or column >= length:
        return False
    else:
        return True

def calculate(matrix,row,column):
    sum = 0
    op = [[0,0],[-1,0],[0,1],[1,0],[0,-1]]

    for move in op:
        new_row = row+move[0]
        new_column = column+move[1]

        if(valid(len(matrix),new_row,new_column)):
            sum += matrix[new_row][new_column]
    
    return sum

tc = int(input())

for _ in range(tc):
    n = int(input())
    matrix = []
    num = 0

    for i in range(n):
        row = []

        for j in range(n):
            num += 1
            row.append(num)

        matrix.append(row)

    Max = int(-1e12)

    for i in range(n):
        for j in range(n):
            current = calculate(matrix,i,j)

            if current > Max:
                Max = current

    print(Max)