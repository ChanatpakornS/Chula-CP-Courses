#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  using std::vector;

  vector<vector<T>> res(k);
  int start = (mSize % k - 1 + k) % k;
  for(int i=0 ; i < mSize ; ++i) {
    res[start].push_back(mData[i]);
    start = (start - 1 + k) % k;
  }
  //should return something
  return res;
}

#endif

