with open ('test.txt','r') as f:
    scan = [line.strip().upper() for line in f]
    print(scan)
    print(len(scan))
    print(len(scan[0]))

PATTER_LENGTH = 15
MISMATCH = 4

def motif_finder(scan: list[str]) -> str:
    freq_char_counter = [dict() for _ in scan[0]]

    print(freq_char_counter)
    
    for i in range(len(scan[0])):
        for line in scan:
            if line[i] not in freq_char_counter[i]:
                freq_char_counter[i][line[i]] = 1
            else:
                freq_char_counter[i][line[i]] += 1

    motif = [max(freq_char_counter[i], key = freq_char_counter[i].get) for i in range(len(scan[0]))]

    return ''.join(motif)

print(motif_finder(scan))

with open('output.txt', 'w') as f:
    f.close()