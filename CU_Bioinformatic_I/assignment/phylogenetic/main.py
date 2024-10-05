def limb_length(matrix: list[list])->list[int,int,int,int]:

    n = len(matrix)
    limb_length = [float("inf") for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if i != j:
                limb_length[i] = min(limb_length[i], (matrix[i][j] + matrix[j][i]) // 2)
    return limb_length

#this case has 4 vars
def build_tree(matrix, pos):
    a, b, c, d = pos    
    an = (matrix[a][c] + matrix[a][b] - matrix[c][b]) // 2
    bn = abs(matrix[a][b] - an)  
    cm = (matrix[c][a] + matrix[c][d] - matrix[d][a]) // 2
    dm = abs(matrix[c][d] - cm)
    nm = matrix[a][c] - an - cm

    return (an, bn, cm, dm, nm)

#this case has 4 vars
def log_tree(tree):
    an, bn, cm, cm, dm = tree
    return f"((i:{an}, j:{bn})n, (k:{cm}, l:{dm})m);"

#human, seals, chimp, whale
matrix = [
    [0,3,6,4],
    [3,0,7,5],
    [6,7,0,2],
    [4,5,2,0]
]

print(limb_length(matrix))
print(log_tree(build_tree(matrix, limb_length(matrix))))