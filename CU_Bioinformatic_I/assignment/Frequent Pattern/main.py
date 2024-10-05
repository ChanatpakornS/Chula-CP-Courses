with open ('test.txt','r') as f:
    scan = [line.strip() for line in f]
    print(scan)

def fcount(scan : str) -> tuple[str, str]:
    LENGTH = 15
    freq_counter = dict()
    for line in scan:
        for i in range(0,len(line)-LENGTH):
            kmer = line[i:i+LENGTH]
            if kmer not in freq_counter:
                freq_counter[kmer] = 1
            else:
                freq_counter[kmer] += 1

    print(freq_counter)

    res = max(freq_counter, key = freq_counter.get)
        
    return res, freq_counter[res]

print(fcount(scan))

