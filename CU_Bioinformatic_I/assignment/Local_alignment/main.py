with open('/Users/joshxi/Documents/Chula-CP-Courses/CU_Bioinformatic_I/assignment/Local_alignment/test.txt') as f:
    word = [line.strip() for line in f]

print(word)

match_score = 3
substitional_penalty = -2
gap_penalty = -2

#Smith Waterman Algorithm
def local_align(seq1, seq2, match_score, substitional_penalty, gap_penalty) :
    maxx = 0
    maxy = 0
    DP = [[0] * (len(seq2)+1) for i in range(len(seq1) + 1)]

    for i in range(1,len(seq1) + 1) :
        for j in range(1,len(seq2)+1) :
            if (seq1[i-1] == seq2[j-1]) :
                match = DP[i-1][j-1] + match_score
            else :
                match = DP[i-1][j-1] + substitional_penalty
            
            upper = DP[i-1][j] + gap_penalty
            left = DP[i][j-1] + gap_penalty

            DP[i][j] = max(0, match, upper, left)

            if (DP[i][j] >= DP[maxx][maxy]) :
                maxx = i
                maxy = j
        
    return (DP, maxx, maxy)

def traceback(seq1, seq2, match_score, substitional_penalty, gap_penalty, DP, maxx, maxy) :
    
    aligned_seq1 = []
    aligned_seq2 = []
    i,j = maxx, maxy
    maxVal = DP[maxx][maxy]
    

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
    

DP, maxx, maxy = local_align(word[1], word[0], match_score, substitional_penalty, gap_penalty)

for i in range(len(DP)):
    s = ''
    for j in range(len(DP[i])):
        s += str(DP[i][j]) + ' '
    print(s)

maxval,res1, res2 = traceback(word[1], word[0], match_score, substitional_penalty, gap_penalty, DP, maxx, maxy)

with open('output.txt', 'w') as f:
    f.write(str(maxval) + '\n')
    f.write(res1 + '\n')
    f.write(res2 + '\n')
    f.close()