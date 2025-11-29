import json

with open('maze.json','r') as file:
    data = json.load(file)

Maze = data['Maze']
Row = len(Maze)
Column = len(Maze[0])

def Print(Maze):
    for i in range(Row):
        for j in range(Column):
            print(f'{Maze[i][j]}',end=" ")
        print()

Print(Maze)