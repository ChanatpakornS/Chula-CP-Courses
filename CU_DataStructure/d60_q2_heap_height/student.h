#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int n = size();
  int height = -1;
  while(n > 0) {
    n >>= 1;
    height++;
  }

  return height;
}

#endif

