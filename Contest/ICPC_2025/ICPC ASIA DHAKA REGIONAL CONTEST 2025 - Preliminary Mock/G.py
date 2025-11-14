tc = int(input())

for _ in range(tc):
    line = input()
    result1 = 2
    result2 = line.find('\\0')
    i = 0

    while i < len(line)-1:
        if line[i] == '\\' and line[i+1] == '0':
            result1 += 1
            i += 2
        else:
            result1 += 1
            i += 1

    print(f'{result1} {result2}')
