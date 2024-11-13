import math

states = [0,1] # 0 = Fair, 1 = Biased
Transition = [
    [0.9, 0.1],
    [0.1, 0.9]
]
Emission = [
    [0.5, 0.5],
    [0.75, 0.25]
]
output = ['A', 'B']

initial = math.log(1/len(states))

x = 'xyxzzxyxyy'

def solve(x, states, Emission, Transition, initial):
    n = len(x)
    k = len(states)

    ptrack = [[0 for _ in range(k)] for _ in range(n)] #prob track
    strack = [[0 for _ in range(k)] for _ in range(n)] #state track

    for i in range(k):
        ptrack[0][i] = initial + math.log(Emission[i][output.index(x[0])]q1q
        strack[0][i] = i

    for i in range(1,n):
        for j in range(k):
            ptrack[i][j] = max(ptrack[i-1][idx] + 
                               math.log(Transition[idx][j]) + 
                               math.log(Emission[idx][output.index(x[i])]) 
                               for idx in range(k)
                            )
    print(ptrack)
    deg = max(ptrack[n-1][idx] for idx in range(k))

    return math.e ** deg

print(solve(x, states, Emission, Transition, initial))