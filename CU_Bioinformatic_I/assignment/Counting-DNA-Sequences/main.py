def countingSequences(sequence) :
    a = 0
    c = 0
    g = 0
    t = 0
    for i in sequence :
        if i == 'A' :
            a += 1
        elif i == 'C' :
            c += 1
        elif i == 'G' :
            g += 1
        elif i == 'T' :
            t += 1
    return a, c, g, t

s = input()
a, c, g, t = countingSequences(s)

print(len(s))
print(a, c, g, t)