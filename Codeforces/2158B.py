tc = int(input())

for _ in range(tc):
    n = int(input())
    sequence = list(map(int,input().split()))
    hashmap = {}
    
    for value in sequence:
        if value in hashmap:
            hashmap[value] = hashmap[value]+1
        else:
            hashmap[value] = 1
    
    result = 0
        
    for freq in hashmap:
        if hashmap[freq] % 2 == 0:
            result += 2
        else:
            result += 1

    print(result)