f = open(file='', mode='')

readFile = [line.strip() for line in f]

f.close()

# insert function here

wfile_name = 'output.txt'

wfile = open(wfile_name, 'w')

wfile.write('...')