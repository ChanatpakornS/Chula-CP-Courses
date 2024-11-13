import math

Transition = {
    'A': {
        'A': 0.255,
        'B': 0.227,
        'C': 0.119,
        'D': 0.399
    },
    'B': {
        'A': 0.088,
        'B': 0.494,
        'C': 0.311,
        'D': 0.106
    },
    'C': {
        'A': 0.662,
        'B': 0.159,
        'C': 0.116,
        'D': 0.064
    },
    'D' : {
        'A': 0.154,
        'B': 0.306,
        'C': 0.293,
        'D': 0.246
    }
}
Emission = {
    'A': {
        'x': 0.213,
        'y': 0.224,
        'z': 0.563
    },
    'B': {
        'x': 0.023,
        'y': 0.421,
        'z': 0.556
    },
    'C': {
        'x': 0.493,
        'y': 0.389,
        'z': 0.118
    },
    'D': {
        'x': 0.473,
        'y': 0.263,
        'z': 0.264
    }
}
output = ['x', 'y', 'z']
states = ['A', 'B','C', 'D']

initial = math.log(1/len(states))

x = 'xzxzzzxyxxyzxxxzzzyxzxzzyzzxyxxxzxyxxyxyxyyxxyzzxzxyyzyzyyxyzzzyxzyxxzxyzxyzyxzxxyxzzzzyxzxyzzyzzzzx'


def solve(x, states, Emission, Transition, initial):
    n = len(x)

    # Initialize probability track and state track as dictionaries
    ptrack = [{state: 0 for state in states} for _ in range(n)]  # probability track
    strack = [{state: '' for state in states} for _ in range(n)]  # state track

    # Initialize the first column of the probability and state track
    for state in states:
        ptrack[0][state] = initial + math.log(Emission[state][x[0]])
        strack[0][state] = state

    # Fill in the probability and state tracks
    for i in range(1, n):
        for curr_state in states:
            max_prob = float('-inf')
            best_prev_state = None
            for prev_state in states:
                prob = (ptrack[i - 1][prev_state] + 
                        math.log(Transition[prev_state][curr_state]) + 
                        math.log(Emission[curr_state][x[i]]))
                if prob > max_prob:
                    max_prob = prob
                    best_prev_state = prev_state
            ptrack[i][curr_state] = max_prob
            strack[i][curr_state] = best_prev_state

    # Find the most probable final state
    max_prob = float('-inf')
    final_state = None
    for state in states:
        if ptrack[n - 1][state] > max_prob:
            max_prob = ptrack[n - 1][state]
            final_state = state

    # Backtrack to find the most likely sequence of states
    state_sequence = [final_state]
    for i in range(n - 1, 0, -1):
        final_state = strack[i][final_state]
        state_sequence.append(final_state)

    # Reverse the sequence since we backtracked from the last state
    state_sequence.reverse()

    # Return the state sequence
    return state_sequence

print(''.join(solve(x, states, Emission, Transition, initial)))
