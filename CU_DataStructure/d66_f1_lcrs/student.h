// You may include library here

int depth(node *n) {
  if (!n) return -1;

  int current_depth = depth(n->left_child) + 1;
  int sibling_depth = depth(n->right_sibling);

  return max(current_depth, sibling_depth);
}
