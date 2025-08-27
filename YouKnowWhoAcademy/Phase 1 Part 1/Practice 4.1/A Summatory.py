import sys
input = sys.stdin.readline
write = sys.stdout.write
limit = 1000000
mod = 1000000003
hashmap = [0]
value = 0
for i in range(1,limit+1):
    value = (value+pow(i,3)) % mod
    hashmap.append(value)
prefix_sum = [0]
for i in range(1,limit+1):
    prefix_sum.append((prefix_sum[i-1]+hashmap[i]) % mod)
tc = int(input())
while tc != 0:
    tc -= 1
    n = int(input())
    print(prefix_sum[n])
