def read_matrix(filename: str) -> tuple[list[list], dict]:
    char_index = {}
    mat_value = []

    with open(filename,'r') as f:
        header = f.readline().rstrip().strip().split()
        for i in range(1, len(header)):
            char_index[header[i]] = i-1

        for line in f.readlines():
            line = line.rstrip().split()
            mat_value.append([ int(line[j]) for j in range(1, len(line))])

        # print(mat_value)

    # print(char_index)

    return (mat_value, char_index)

def local_alignment(seq1: str, seq2:str) -> tuple[str, str]:
    PENALTY = 5;
    maxx = 0
    maxy = 0
    DP = [[0] * (len(seq2)+1) for i in range(len(seq1) + 1)]

    for i in range(1,len(seq1) + 1) :
        for j in range(1,len(seq2)+1) :

            # print(seq1[i-1], seq2[j-1])
            
            match =  DP[i-1][j-1] + PAM250_MATRIX[PAM250_HEADER[seq1[i-1]]][PAM250_HEADER[seq2[j-1]]]
            upper = DP[i-1][j] - PENALTY
            left = DP[i][j-1] - PENALTY

            DP[i][j] = max(0, match, upper, left)

            if (DP[i][j] >= DP[maxx][maxy]) :
                maxx = i
                maxy = j
        
    #-----------------------------------------------------------------------------------------------

    # print(DP)

    aligned_seq1 = []
    aligned_seq2 = []
    maxVal = DP[maxx][maxy]
    i,j = maxx, maxy
    

    while DP[i][j] != 0:
        current_score = DP[i][j]
        diagonal_score = DP[i - 1][j - 1]
        left_score = DP[i][j - 1]
        top_score = DP[i - 1][j]

        # Traceback: check where the current score came from
        if current_score == diagonal_score + PAM250_MATRIX[PAM250_HEADER[seq1[i - 1]]][PAM250_HEADER[seq2[j - 1]]]:
            aligned_seq1.append(seq1[i - 1])
            aligned_seq2.append(seq2[j - 1])
            i -= 1
            j -= 1
        elif current_score == top_score - PENALTY:
            aligned_seq1.append(seq1[i - 1])
            aligned_seq2.append('-')
            i -= 1
        elif current_score == left_score - PENALTY:
            aligned_seq1.append('-')
            aligned_seq2.append(seq2[j - 1])
            j -= 1

    # Reverse the aligned sequences (since we traced from the end)
    aligned_seq1.reverse()
    aligned_seq2.reverse()

    # Join list of characters to form the aligned string
    return maxVal, ''.join(aligned_seq1), ''.join(aligned_seq2)

# with open("test.txt",'r') as f:
#     data = [line.strip() for line in f.readlines()]

with open("rosalind_ba5f.txt",'r') as f:
    data = [line.strip() for line in f.readlines()]

PAM250_MATRIX, PAM250_HEADER = read_matrix('PAM250.txt')
maxVal, align1, align2 = local_alignment(data[0], data[1])

with open('output.txt', 'w') as f:
    f.write(str(maxVal) + '\n')
    f.write(align1 + '\n')
    f.write(align2 + '\n')
    f.close()

