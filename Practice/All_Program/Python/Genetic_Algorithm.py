import random

adj_matrix = [
[0,42,14,50,78],
[24,0,27,60,71],
[71,28,0,39,44],
[29,10,95,0,62],
[51,20,17,76,0]
]

paths = len(adj_matrix)
op = 5
population = []

for i in range(op):
    current = random.sample(range(0,5),5)
    current.append(current[0])
    population.append(current)

population_value = []
total_sum = 0

for i in population:
    sum = 0

    for j in i:
        sum += j

    total_sum += sum
    population_value.append(sum)

roulette = []

for i in range(op):
    print(f'{population[i]}: {population_value[i]}')
    print(f'Total Sum: {total_sum}')
    percentage = (population_value[i]/total_sum)*100
    roulette.append(percentage)

print('Roulette')

for i in roulette:
    print(f"{i:.2f}%")

    