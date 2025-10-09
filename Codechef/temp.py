from collections import Counter

store = input()
hashmap = Counter(store)

sum = 0
odd = False

for i in hashmap:
    current = hashmap[i]

    if current % 2 == 0:
        sum += current
    else:
        odd = True
        sum += current-1

if odd == True:
    sum += 1

print(sum)