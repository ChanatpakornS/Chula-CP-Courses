#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if (n == NULL || (n->left == NULL && n->right == NULL)) return 0;
  if (n->left == NULL) return 1 + shallowest_leaf(n->right);
  if (n->right == NULL) return 1 + shallowest_leaf(n->left);
  return std::min(1 + shallowest_leaf(n->right), 1 + shallowest_leaf(n->left));
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  if (mSize == 0) return -1;
  if (mSize == 1) return 0;
  return shallowest_leaf(mRoot);
}


#endif
