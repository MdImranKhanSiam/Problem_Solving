n = int(input())
store = list(map(int,input().split()))
result = 0
for i in store:
    result += i
print(float(result/n))