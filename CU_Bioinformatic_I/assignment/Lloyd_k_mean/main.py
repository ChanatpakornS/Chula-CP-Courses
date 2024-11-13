import numpy as np

def lloyd_algorithm(k, m, data):
    # Step 1: Initialize centers with the first k points from data
    centers = np.array(data[:k])
    
    # Step 2: Iterate until convergence or maximum iterations
    max_iterations = 100
    tolerance = 1e-4
    
    for _ in range(max_iterations):
        # Step 3: Assign points to the nearest center
        distances = np.linalg.norm(data[:, np.newaxis] - centers, axis=2)
        labels = np.argmin(distances, axis=1)
        
        # Step 4: Recalculate centers by computing the mean of the assigned points
        new_centers = np.array([data[labels == i].mean(axis=0) for i in range(k)])
        
        # Step 5: Check for convergence
        if np.all(np.abs(new_centers - centers) < tolerance):
            break
        
        centers = new_centers
    
    return centers

with open('test2.txt', 'r') as f:
    lines = f.readlines()
    data = [ line.strip() for line in lines]
    k = int(data[0].split()[0])
    m = int(data[0].split()[1])
    data = np.array([ [ float(x) for x in line.split() ] for line in data[1:] ])
    print("k: ", k)
    print("m: ", m)
    print("data: ", data)

centers = lloyd_algorithm(k, m, data)

for l in centers:
    print(' '.join([str(round(x,3)) for x in l]))
