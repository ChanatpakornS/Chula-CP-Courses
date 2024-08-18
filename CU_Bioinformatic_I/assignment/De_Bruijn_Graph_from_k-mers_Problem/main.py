f = open(file="D:/Chulalongkorn.U/Chula-CP-Courses/CU_Bioinformatic_I/assignment/De_Bruijn_Graph_from_k-mers_Problem/rosalind_ba3e.txt", mode='r')

read_seq = [line.strip() for line in f]

f.close()

def creating_edge(reads):
    edges = dict()

    for r in reads : 
        r1 = r[:-1]
        r2 = r[1:]
        print(r1,r2)
        if (r1 != r2) :
            if r1 not in edges:
                edges[r1] = []
            edges[r1].append(r2)

    return edges

output = creating_edge(read_seq)

file_name = "output.txt"

writeFile = open(file_name, 'w')

for node, nnode in output.items():
    writeFile.write(node + " -> " + ','.join(nnode) + '\n')