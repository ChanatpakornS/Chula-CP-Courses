#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  if (a == b)
    return a;
  auto tp = a;
  iterator cpb = --b;
  while (a != cpb)
  {
    std::swap(*a, *cpb);
    if (++a == cpb--)
      break;
  }

  return tp;
}

#endif
