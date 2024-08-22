y = input()

def inverseBWT(word) :

    arr = [''] * len(word)
    copy_arr = [i for i in word]

    for loop in range(len(arr)) :
        arr = [ copy_char + char for char, copy_char in zip(arr, copy_arr)]
        arr.sort()
        # print(arr)


    return arr[0][1:]


print(inverseBWT(y))

exec(input().strip())