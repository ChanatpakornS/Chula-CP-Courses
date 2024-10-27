#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <set>
#include <algorithm>

using namespace std;

template <typename T>
void CP::vector<T>::uniq(std::vector<CP::vector<T>::iterator> itrs)
{
  // Write code here
  std::vector<CP::vector<T>::iterator> rs;
  std::set<T> cmp;
  sort(itrs.begin(), itrs.end());
  for (auto &x : itrs)
  {
    if (cmp.count(*x))
      rs.push_back(x);
    else
      cmp.insert(*x);
  }

  std::sort(rs.begin(), rs.end(), std::greater());

      for (auto i : rs) erase(i);
}

#endif
