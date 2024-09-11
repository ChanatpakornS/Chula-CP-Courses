with open("rosalind_ba5g.txt",'r') as f:
    data = [line.strip() for line in f.readlines()]

def edit_distance(seq1: str, seq2: str) -> int:
    n, m = len(seq1), len(seq2) 
    #let n = rows, m = columns

    DP = [ [0 for _ in range(m+1)] for _ in range(n+1) ]

    for i in range(n+1): DP[i][0] = i
    for j in range(m+1): DP[0][j] = j

    for i in range(1, n+1):
        for j in range(1, m+1):
            if (seq1[i-1] == seq2[j-1]):
                DP[i][j] = DP[i-1][j-1]
            else:
                DP[i][j] = 1 + min(DP[i][j-1], DP[i-1][j], DP[i-1][j-1])
                
    # print(seq1,seq2)
    # print(DP)
    
    return DP[n][m]

res = edit_distance(data[0], data[1])


with open('output.txt', 'w') as f:
    f.write(str(res) + '\n')
    f.close()