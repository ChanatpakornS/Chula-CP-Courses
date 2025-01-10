#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  node * back = end().ptr->prev;
  for(auto &phum: ls) {
    back->next = phum.mHeader->next;
    phum.mHeader->next->prev = back;
    back = phum.mHeader->prev;
    mSize += phum.size();
    phum.mHeader->next = phum.mHeader;
    phum.mHeader->prev = phum.mHeader;
    phum.mSize = 0;
  }

  mHeader->prev = back;
  back->next = mHeader;
}

#endif
