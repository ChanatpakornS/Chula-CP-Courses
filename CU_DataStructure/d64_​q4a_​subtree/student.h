#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n)
{
  // finding the right mSize;
  if(n == NULL) return 0;
  if (!n->left && !n->right)
    return 1;
  if (!n->left)
    return 1 + process(n->right);
  if (!n->right)
    return 1 + process(n->left);
  return 1 + process(n->right) + process(n->left);
}

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right)
{

  if (mSize == 0)
    return std::pair<KeyT, MappedT>();

  left.mRoot = mRoot->left;
  left.mSize = process(mRoot->left);
  // left.mRoot->parent = NULL;

  right.mRoot = mRoot->right;
  right.mSize = process(mRoot->right);
  // left.mRoot->parent = NULL;

  mRoot->left = NULL;
  mRoot->right = NULL;

  mSize = 1;
  return mRoot->data;
}

#endif
