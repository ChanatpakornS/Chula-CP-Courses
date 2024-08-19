f = open(file='/Users/joshxi/Documents/Chula-CP-Courses/CU_Bioinformatic_I/assignment/Eulerian Path Problem/rosalind_ba3g.txt', mode='r')

readFile = f.read().splitlines()

node = dict()
for text in readFile : 
    readNode = text.split(' -> ')
    if readNode[0] not in node :
        node[readNode[0]] = []
    
    add_related_node = readNode[1].split(',')

    node[readNode[0]] += add_related_node

f.close()

# insert function here

def construct_edges(node):

    edges = []

    for currentNode, nextNodes in node :
        for nnode in nextNodes :
            edges.append((currentNode, nnode))
    
    return edges

def pseudo_edge(node):
    
    outDegree = dict()
    inDegree = dict()

    for currentNode, nextNodes in node.items() :
        for nnode in nextNodes :
            if str(currentNode) not in outDegree:
                outDegree[str(currentNode)] = 0
            if str(nnode) not in inDegree:
                inDegree[str(nnode)] = 0
            if str(nnode) not in outDegree:
                outDegree[str(nnode)] = 0

            outDegree[currentNode] += 1
            inDegree[nnode] += 1

    pseudo_out = 'NaN'
    pseudo_in = 'NaN'

    for checkNode in outDegree :
        if outDegree.get(checkNode) > inDegree.get(checkNode) :
            pseudo_in = checkNode
        if  outDegree.get(checkNode) < inDegree.get(checkNode) :
            pseudo_out = checkNode

    if pseudo_out not in node :
        node[pseudo_out] = list()
    node[pseudo_out].append(pseudo_in)

    return (pseudo_out, pseudo_in)

# euler circuit w/ hierholzer's algorithm then turn to path
def euler_path(adjlist, pseudo_edge) :

    (pseudo_out, pseudo_in) = pseudo_edge

    curr_path = ['0'] #stack
    circuit = []

    while curr_path:
        curr_node = curr_path[-1]

        if adjlist.get(curr_node) :
            next_node = adjlist.get(curr_node).pop()
            curr_path.append(next_node)
        else :
            circuit.append(curr_path.pop())

    path = circuit[::-1]

    for i in range(len(path) - 1) :
        if path[i] == pseudo_out and path[i+1] == pseudo_in :
            return path[i + 1:-1] + path[:i + 1]
        
    return path

def finding_euler_path(node) :

    pseudo = pseudo_edge(node)
    result = euler_path(node, pseudo)

    return result
    

# ending here

res = finding_euler_path(node)

wfile_name = 'output.txt'

wfile = open(wfile_name, 'w')

for i in range(len(res)) :
    wfile.write(res[i])
    if (len(res) - i > 1) :
        wfile.write('->')
    