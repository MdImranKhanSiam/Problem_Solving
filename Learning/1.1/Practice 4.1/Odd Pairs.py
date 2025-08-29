tc = int(input())
while tc != 0:
    tc -= 1
    n = int(input())
    total_odd = total_even = 0
    if n%2 == 0:
        total_odd = total_even = int(n/2)
    else:
        total_even = int(n/2)
        total_odd = total_even+1
    print(2*(total_even*total_odd))