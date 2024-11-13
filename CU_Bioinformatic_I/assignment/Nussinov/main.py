seq = input()

def can_pair(i, j, seq):
    """
    Check if two bases can form a vanid pair (A-U or G-C).
    """
    if (seq[i] == 'A' and seq[j] == 'U') or \
       (seq[i] == 'U' and seq[j] == 'A') or \
       (seq[i] == 'C' and seq[j] == 'G') or \
       (seq[i] == 'G' and seq[j] == 'C') or \
       (seq[i] == 'G' and seq[j] == 'U') or \
       (seq[i] == 'U' and seq[j] == 'G'):
        return True
    return False

def nussinov(seq):
    n = len(seq)
    # init DP
    dp = [[0 for _ in range(n+1)] for _ in range(n)]

    #start Nussinov angorithm
    for l in range(1, n):
        for i in range(n-l):
            j = i + l
            dp[i][j] = dp[i][j-1]
            dp[i][j] = max(dp[i][j], dp[i][j - 1])
            if can_pair(i, j, seq):
                dp[i][j] = max(dp[i][j], dp[i + 1][j - 1] + 1)

            for k in range(i + 1, j):
                dp[i][j] = max(dp[i][j], dp[i][k] + dp[k + 1][j])

    def traceback(i, j, structure):
        if i >= j:
            return
        
        if dp[i][j] == dp[i][j-1]:
            traceback(i, j-1, structure)
            return
        else :
            for k in range(i, j):
                if dp[i][j] == dp[i][k] + dp[k+1][j] + 1:
                    traceback(i, k-1, structure)
                    traceback(k+1, j-1, structure)
                    break
        
        # # Find which case gave us the optimal solution
        # if can_pair(i, j, seq) and (i + 1 >= j - 1 or dp[i][j] == dp[i+1][j-1] + 1):
        #     structure.append((i, j))
        #     traceback(i+1, j-1, structure)
        # elif i + 1 < n and dp[i][j] == dp[i+1][j]:
        #     traceback(i+1, j, structure)
        # elif j - 1 >= 0 and dp[i][j] == dp[i][j-1]:
        #     traceback(i, j-1, structure)
        # else:
        #     # Try all possible k values to find the split point
        #     for k in range(i+1, j):
        #         if dp[i][j] == dp[i][k] + dp[k+1][j]:
        #             traceback(i, k, structure)
        #             traceback(k+1, j, structure)
        #             break

    structure = []
    traceback(0, n - 1, structure)
    return dp, structure

def print_structure(structure, seq):
    """
    Print RNA structure in dot-bracket notation.
    """
    n = len(seq)
    dot_bracket = ['.'] * n
    for i, j in structure:
        dot_bracket[i] = '('
        dot_bracket[j] = ')'
    return ''.join(dot_bracket)

dp, structure = nussinov(seq)

for row in dp:
    print(row)

print("\nBase Pairs:", structure)
print("Dot-Bracket Notation:", print_structure(structure, seq))


# def nussinov(seq):
#     """
#     Implements the Nussinov algorithm for RNA secondary structure prediction.
#     Finds the maximum number of possible base pairs in the sequence.
    
#     Args:
#         seq (str): RNA sequence
        
#     Returns:
#         tuple: (dp matrix, list of base pairs)
#     """
#     n = len(seq)
#     # Initialize dp matrix with zeros
#     dp = [[0 for _ in range(n)] for _ in range(n)]
    
#     # Fill the dp matrix
#     # l is the length of the subsequence
#     for l in range(1, n):
#         # i is the start position
#         for i in range(n - l):
#             j = i + l  # j is the end position
            
#             # Case 1: i,j forms a pair
#             if can_pair(i, j, seq):
#                 dp[i][j] = dp[i+1][j-1] + 1 if i+1 < j-1 else 1
                
#             # Case 2: i unpaired, take from i+1,j
#             if i + 1 < n:
#                 dp[i][j] = max(dp[i][j], dp[i+1][j])
                
#             # Case 3: j unpaired, take from i,j-1
#             if j - 1 >= 0:
#                 dp[i][j] = max(dp[i][j], dp[i][j-1])
                
#             # Case 4: bifurcation - split into two parts
#             for k in range(i+1, j):
#                 dp[i][j] = max(dp[i][j], dp[i][k] + dp[k+1][j])
                
#     def traceback(i, j, structure):
#         """
#         Traceback function to recover the actual base pairs from dp matrix.
        
#         Args:
#             i (int): Start position
#             j (int): End position
#             structure (list): List to store base pairs
            
#         Returns:
#             None (modifies structure list in-place)
#         """
#         if i >= j:
#             return
            
#         # Case 1: i,j pair gives optimal solution
#         if can_pair(i, j, seq) and (i+1 >= j-1 or dp[i][j] == dp[i+1][j-1] + 1):
#             structure.append((i, j))
#             traceback(i+1, j-1, structure)
            
#         # Case 2: optimal solution comes from i+1,j
#         elif i+1 < n and dp[i][j] == dp[i+1][j]:
#             traceback(i+1, j, structure)
            
#         # Case 3: optimal solution comes from i,j-1
#         elif j-1 >= 0 and dp[i][j] == dp[i][j-1]:
#             traceback(i, j-1, structure)
            
#         # Case 4: optimal solution comes from splitting at some k
#         else:
#             for k in range(i+1, j):
#                 if dp[i][j] == dp[i][k] + dp[k+1][j]:
#                     traceback(i, k, structure)
#                     traceback(k+1, j, structure)
#                     break
    
#     # Get the structure through traceback
#     structure = []
#     traceback(0, n-1, structure)
#     return dp, structure

# def print_structure(structure, seq):
#     """
#     Convert base pairs to dot-bracket notation.
    
#     Args:
#         structure (list): List of base pair tuples (i,j)
#         seq (str): RNA sequence
        
#     Returns:
#         str: Structure in dot-bracket notation
#     """
#     n = len(seq)
#     dot_bracket = ['.'] * n
#     for i, j in structure:
#         dot_bracket[i] = '('
#         dot_bracket[j] = ')'
#     return ''.join(dot_bracket)

# def debug_traceback(seq):
#     """
#     Debug the traceback function by printing each step of the process.
#     """
#     n = len(seq)
#     # Initialize dp matrix
#     dp = [[0 for _ in range(n)] for _ in range(n)]
    
#     # Fill dp matrix
#     for l in range(1, n):
#         for i in range(n-l):
#             j = i + l
#             # Case 1: i,j pair
#             if can_pair(i, j, seq):
#                 dp[i][j] = dp[i+1][j-1] + 1 if i+1 < j-1 else 1
#             # Case 2: i unpaired
#             if i + 1 < n:
#                 dp[i][j] = max(dp[i][j], dp[i+1][j])
#             # Case 3: j unpaired
#             if j - 1 >= 0:
#                 dp[i][j] = max(dp[i][j], dp[i][j-1])
#             # Case 4: bifurcation
#             for k in range(i+1, j):
#                 dp[i][j] = max(dp[i][j], dp[i][k] + dp[k+1][j])
    
#     print("DP Matrix:")
#     for row in dp:
#         print(row)
    
#     def debug_traceback_recursive(i, j, structure, depth=0):
#         indent = "  " * depth
#         print(f"{indent}Checking substring {i},{j}: {seq[i:j+1]}")
        
#         if i >= j:
#             print(f"{indent}Base case: i>=j")
#             return
            
#         # Case 1: i,j pair
#         if can_pair(i, j, seq):
#             if i+1 >= j-1 or dp[i][j] == dp[i+1][j-1] + 1:
#                 print(f"{indent}Found pair: {seq[i]}-{seq[j]} at positions {i},{j}")
#                 structure.append((i, j))
#                 debug_traceback_recursive(i+1, j-1, structure, depth+1)
#                 return
                
#         # Case 2: i unpaired
#         if i+1 < n and dp[i][j] == dp[i+1][j]:
#             print(f"{indent}Skipping base {seq[i]} at position {i}")
#             debug_traceback_recursive(i+1, j, structure, depth+1)
#             return
            
#         # Case 3: j unpaired
#         if j-1 >= 0 and dp[i][j] == dp[i][j-1]:
#             print(f"{indent}Skipping base {seq[j]} at position {j}")
#             debug_traceback_recursive(i, j-1, structure, depth+1)
#             return
            
#         # Case 4: bifurcation
#         for k in range(i+1, j):
#             if dp[i][j] == dp[i][k] + dp[k+1][j]:
#                 print(f"{indent}Split at position {k}")
#                 debug_traceback_recursive(i, k, structure, depth+1)
#                 debug_traceback_recursive(k+1, j, structure, depth+1)
#                 return
    
#     structure = []
#     print("\nTraceback steps:")
#     debug_traceback_recursive(0, n-1, structure)
    
#     print("\nFinal structure:", structure)
#     dot_bracket = print_structure(structure, seq)
#     print("Dot-bracket notation:", dot_bracket)
#     return structure, dot_bracket

# # Test with your sequence
# seq = input()
# structure, dot_bracket = debug_traceback(seq)

# # # Example usage
# # if __name__ == "__main__":
# #     # Get RNA sequence
# #     seq = input("Enter RNA sequence: ")
    
# #     # Run Nussinov algorithm
# #     dp, structure = nussinov(seq)
    
# #     # Print results
# #     print("\nDP Matrix:")
# #     for row in dp:
# #         print(row)
    
# #     print("\nBase pairs:", structure)
# #     print("Number of base pairs:", len(structure))
# #     print("Dot-bracket notation:", print_structure(structure, seq))