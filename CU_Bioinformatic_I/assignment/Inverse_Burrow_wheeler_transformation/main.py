with open('/Users/joshxi/Documents/Chula-CP-Courses/CU_Bioinformatic_I/assignment/Inverse_Burrow_wheeler_transformation/rosalind_ba9j.txt') as f:
    word = f.readline().strip()

f.close()

def inverseBWT(word) :

    arr = [''] * len(word)
    copy_arr = [i for i in word]

    for loop in range(len(arr)) :
        arr = [ copy_char + char for char, copy_char in zip(arr, copy_arr)]
        arr.sort()

    return arr[0][1:] + '$'

res = inverseBWT(word)

with open('output.txt', 'w') as f:
    f.write(res)