# with open ('test.txt','r') as f:
#     input_word = []
#     for line in f:
#         scan = line.strip()
#         if(scan[0] == '-'):
#             continue
#         input_word.append(scan.split())
#         print(scan)        

input_word='BAABBBBAAAAABABABABBABAABAAABBBBAABBABBAABBAABABAA'

transition_matrix = {
    'A': {
        'A': 0.513,
        'B': 0.487
    },
    'B': {
        'A': 0.169,
        'B': 0.831
    }
}

initial = 0.5

for i in range(len(input_word)):
    if i == 0:
        result = initial
    else:
        result = result * transition_matrix[input_word[i-1]][input_word[i]]


print(result)