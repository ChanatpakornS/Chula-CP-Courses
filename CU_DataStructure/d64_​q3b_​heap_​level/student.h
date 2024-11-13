#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  int left = 0;
  int right = 0;
  for(int i=0 ; i < k; i++) {
    left = 2*left + 1;
    right = 2*right + 2;
  }
  right = (mSize < right) ? mSize-1 : right;
  std::vector<T> r;
  for(int i=left ; i <= right; i++) {
    r.push_back(mData[i]); 
  }
  std::sort(r.rbegin(), r.rend(), mLess);
  return r;
}

#endif

