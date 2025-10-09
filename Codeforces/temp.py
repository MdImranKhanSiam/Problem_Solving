def solve(deck,action,position):
    if position == len(action):
        return
    else:
        move = action[position]

    current_deck = deck.copy()

    if move == '0':
        current_deck[position] = '-'
    elif move == '1':




n, k = list(map(int,input().split()))
action = input()
deck = [0] * n
solve(deck,action,0,)




# 0 0 1 2 0 2 1

# If Total 2's >= ceil(log2(n)) Then all ?
# Else do recursion