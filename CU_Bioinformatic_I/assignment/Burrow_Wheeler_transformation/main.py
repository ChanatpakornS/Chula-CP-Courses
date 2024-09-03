file = open('/home/csap/Chula-CP-Courses/CU_Bioinformatic_I/assignment/Burrow_Wheeler_transformation/rosalind_ba9i.txt', 'r')
y = file.read()

#function
def BWT(word) :
    n = len(word)

    reorder_keeper = []

    for i in range(n) : 
        reorder_keeper.append(word[i:] + word[:i])
        
    reorder_keeper.sort()

    result = ''
    for i in range(len(reorder_keeper)) : 
        result += reorder_keeper[i][-1]

    return result

res = BWT(y)

wf = 'output.txt'
writeFile = open(wf, 'w')
writeFile.write(res)