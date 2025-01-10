#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output)
{
  for(auto i=a; i!=b;++i)
  {
    if (*i == value)
    {
      // adding to output
      node *nadd = new node(value, output.mHeader, output.mHeader->next);
      output.mHeader->next->prev = nadd;
      output.mHeader->next = nadd;
      ++output.mSize;
      --mSize;

      i.ptr->prev->next = i.ptr->next;
      i.ptr->next->prev = i.ptr->prev;
      delete i.ptr;
    }
  }
}

#endif
