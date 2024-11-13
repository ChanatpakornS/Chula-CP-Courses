def print_structure(structure, seq):
    """
    Convert base pairs to dot-bracket notation.
    
    Args:
        structure (list): List of base pair tuples (i,j)
        seq (str): RNA sequence
        
    Returns:
        str: Structure in dot-bracket notation
    """
    n = len(seq)
    dot_bracket = ['.'] * n
    for i, j in structure:
        dot_bracket[i] = '('
        dot_bracket[j] = ')'
    return ''.join(dot_bracket)