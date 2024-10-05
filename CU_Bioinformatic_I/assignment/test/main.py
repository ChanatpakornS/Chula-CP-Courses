with open ('test.txt','r') as f:
    scan = [line.strip() for line in f]
    print(scan)


with open('output.txt', 'w') as f:
    f.close()