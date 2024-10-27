#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  int dis = std::distance(first, last);
  mData = new T[dis]();
  mSize = dis;
  mCap = dis;
  for(auto i=first; i != last; i++) {
      mData[--dis] = *i;
  }
  
}

#endif
