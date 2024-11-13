import math

def conditional_probability(x, pi, states, emissions, symbols):
    prob = 0 
    
    for i in range(len(x)):
        state = pi[i]
        char = x[i]
        

        prob += math.log(emissions[state][char])
    
    return math.exp(prob)

# Input Data
x = "yzxzxzyyyxzxzzzyyxxxxxxyyzyyzzxxyxxyzxyzxzxyzzyzyz"
pi = "AABBABAAAAAAAAAABABABAAAAABABBAABBAABBABABBBBAABAA"
states = ['A', 'B']
symbols = ['x', 'y', 'z']
emissions = {
    'A': {'x': 0.19, 'y': 0.432, 'z': 0.377},
    'B': {'x': 0.125, 'y': 0.587, 'z': 0.288}
}

result = conditional_probability(x, pi, states, emissions, symbols)
print(result)
