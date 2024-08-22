y = input()

#function
def BWT(word) :

    y += '$'
    n = len(y)

    reorder_keeper = []

    for i in range(n) : 
        reorder_keeper.append(y[i:] + y[:i])
        
    reorder_keeper.sort()

    result = ''
    for i in range(len(reorder_keeper)) : 
        result += reorder_keeper[i][-1]

    return result

print(BWT(y))