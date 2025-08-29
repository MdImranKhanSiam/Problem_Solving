import sys
input = sys.stdin.readline
tc = int(input())
result = []
while tc != 0:
    tc -= 1
    store = list(map(int,input().split()))
    result.append(str(store[0]*store[1]))
sys.stdout.write('\n'.join(result) + '\n')
