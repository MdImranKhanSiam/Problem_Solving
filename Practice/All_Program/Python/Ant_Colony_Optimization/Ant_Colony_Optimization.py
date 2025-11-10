import random
import Visualize_Circular_Tour

Ants = 40
Tours = 500
Alpha = 11
Beta = 4
Rho = 0.5
Pheromone_Level = 100

# Distance_Matrix = [
#     [0,442,154,520,738],
#     [224,0,237,620,731],
#     [731,228,0,391,424],
#     [259,120,945,0,632],
#     [541,220,137,746,0]
# ]

Distance_Matrix = [
    [0, 34, 23, 54, 67, 89, 45, 12, 78, 33, 22, 19, 48, 55, 66, 25, 31, 74, 63, 41],
    [34, 0, 56, 45, 39, 72, 29, 18, 68, 24, 42, 37, 81, 58, 53, 61, 27, 49, 36, 47],
    [23, 56, 0, 64, 58, 41, 77, 52, 25, 67, 35, 28, 60, 19, 83, 72, 59, 46, 26, 34],
    [54, 45, 64, 0, 38, 69, 21, 55, 47, 44, 76, 73, 42, 33, 68, 27, 31, 59, 64, 70],
    [67, 39, 58, 38, 0, 51, 28, 33, 48, 36, 64, 43, 52, 57, 24, 66, 70, 29, 44, 62],
    [89, 72, 41, 69, 51, 0, 73, 66, 39, 46, 58, 54, 34, 28, 44, 63, 25, 31, 77, 49],
    [45, 29, 77, 21, 28, 73, 0, 35, 54, 59, 47, 42, 31, 27, 65, 36, 66, 70, 33, 26],
    [12, 18, 52, 55, 33, 66, 35, 0, 43, 38, 24, 27, 48, 36, 52, 44, 19, 28, 57, 49],
    [78, 68, 25, 47, 48, 39, 54, 43, 0, 62, 41, 32, 50, 64, 33, 29, 74, 58, 40, 30],
    [33, 24, 67, 44, 36, 46, 59, 38, 62, 0, 29, 33, 71, 47, 54, 48, 31, 39, 55, 63],
    [22, 42, 35, 76, 64, 58, 47, 24, 41, 29, 0, 37, 68, 59, 23, 61, 26, 33, 71, 44],
    [19, 37, 28, 73, 43, 54, 42, 27, 32, 33, 37, 0, 49, 67, 52, 36, 58, 69, 48, 53],
    [48, 81, 60, 42, 52, 34, 31, 48, 50, 71, 68, 49, 0, 45, 35, 27, 32, 43, 64, 62],
    [55, 58, 19, 33, 57, 28, 27, 36, 64, 47, 59, 67, 45, 0, 46, 52, 68, 44, 25, 31],
    [66, 53, 83, 68, 24, 44, 65, 52, 33, 54, 23, 52, 35, 46, 0, 48, 59, 62, 77, 58],
    [25, 61, 72, 27, 66, 63, 36, 44, 29, 48, 61, 36, 27, 52, 48, 0, 32, 50, 39, 47],
    [31, 27, 59, 31, 70, 25, 66, 19, 74, 31, 26, 58, 32, 68, 59, 32, 0, 24, 45, 53],
    [74, 49, 46, 59, 29, 31, 70, 28, 58, 39, 33, 69, 43, 44, 62, 50, 24, 0, 37, 26],
    [63, 36, 26, 64, 44, 77, 33, 57, 40, 55, 71, 48, 64, 25, 77, 39, 45, 37, 0, 51],
    [41, 47, 34, 70, 62, 49, 26, 49, 30, 63, 44, 53, 62, 31, 58, 47, 53, 26, 51, 0]
]

# Pheromone_Matrix = [
#     [0,1,1,1,1],
#     [1,0,1,1,1],
#     [1,1,0,1,1],
#     [1,1,1,0,1],
#     [1,1,1,1,0]
# ]

Pheromone_Matrix = [
    [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0]
]

Heuristic_Matrix = [
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
]

def Choose_City(city):
    chosen_city = None
    probabilistic = []
    cumulative_sum = []
    Sum = 0

    for path in city:
        i = path[0]
        j = path[1]
        Tau_ij = Pheromone_Matrix[i][j]
        Eta_ij = Heuristic_Matrix[i][j]
        Sum += (pow(Tau_ij,Alpha))*(pow(Eta_ij,Beta))

    probabilistic_sum = 0

    for path in city:
        i = path[0]
        j = path[1]
        Tau_ij = Pheromone_Matrix[i][j]
        Eta_ij = Heuristic_Matrix[i][j]
        P_ij = ((pow(Tau_ij,Alpha))*(pow(Eta_ij,Beta)))/Sum
        probabilistic.append(P_ij)
        probabilistic_sum += P_ij
        cumulative_sum.append(probabilistic_sum)

    Random_Number = random.uniform(0,1)
    found = None

    for m in range(len(cumulative_sum)):
        if Random_Number <= cumulative_sum[m]:
            found = m
            break

    chosen_city = city[found][1]
    
    return chosen_city

def Journey():
    root_city = random.randint(0,len(Distance_Matrix)-1)
    visited_city = [root_city]
    current_city = root_city

    for i in range(len(Distance_Matrix)-1):
        city = []

        for j in range(len(Distance_Matrix)):
            if j not in visited_city:
                city.append([current_city,j])

        current_city = Choose_City(city)
        visited_city.append(current_city)

    visited_city.append(root_city)

    return visited_city 

def Pheromone_Evaporation():
    for i in range(len(Pheromone_Matrix)):
        for j in range(len(Pheromone_Matrix)):
            if i != j:
                Tau_ij = Pheromone_Matrix[i][j]
                Tau_ij = (1-Rho)*Tau_ij
                Pheromone_Matrix[i][j] = Tau_ij

def Pheromone_Placing(Circular_Tours):
    Shortest_Path = None
    Min = int(1e9)

    for path in Circular_Tours:
        edges = []

        for i in range(len(path)-1):
            edges.append([path[i],path[i+1]])

        path_length = 0

        for city in edges:
            path_length += Distance_Matrix[city[0]][city[1]]

        if path_length < Min:
            Min = path_length
            Shortest_Path = [path,Min]

        Delta_Tau = Pheromone_Level/path_length

        for city in edges:
            Pheromone_Matrix[city[0]][city[1]] = Delta_Tau
            Pheromone_Matrix[city[1]][city[0]] = Delta_Tau

    return Shortest_Path
        
for i in range(len(Heuristic_Matrix)):
    for j in range(len(Heuristic_Matrix)):
        if i != j:
            Heuristic_Matrix[i][j] = 1/Distance_Matrix[i][j]

All_Ants_Tours = []

for tour in range(Tours):
    # print('Pheromone Matrix')
    # for j in Pheromone_Matrix:
    #     print(j)

    Circular_Tours = []

    for ant in range(Ants):
        Circular_Tours.append(Journey())
        
    Pheromone_Evaporation()
    Shortest_Path = Pheromone_Placing(Circular_Tours)

    # print('Circular Tours')
    # for i in Circular_Tours:
    #     print(i)
        
    print(f'Shortest Path So Far: {Shortest_Path[0]}, Length: {Shortest_Path[1]}')

    All_Ants_Tours.append(Shortest_Path[0])
    
Visualize_Circular_Tour.visualize_tours_with_real_distances(All_Ants_Tours, Distance_Matrix, save_as="gif", fps=10)