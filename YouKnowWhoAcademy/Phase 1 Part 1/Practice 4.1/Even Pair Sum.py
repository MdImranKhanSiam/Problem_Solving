def even_odd(n):
    store = []
    if n%2 == 0:
        value = int(n/2)
        store.append(value)
        store.append(value)
    else:
        value = int(n/2)
        store.append(value)
        store.append(value+1)
    return store

tc = int(input())
while tc != 0:
    tc -= 1
    store = list(map(int,input().split()))
    a = store[0]
    b = store[1]
    store_a = even_odd(a)
    store_b = even_odd(b)
    a_even = store_a[0]
    a_odd = store_a[1]
    b_even = store_b[0]
    b_odd = store_b[1]
    result = (a_even*b_even)+(a_odd*b_odd)
    print(result)