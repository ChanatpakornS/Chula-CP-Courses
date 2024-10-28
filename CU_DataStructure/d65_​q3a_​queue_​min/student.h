#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos, Comp comp) const
{
  T out;
  int k = 0;
  while (true)
  {
    if (pos[k] < mSize)
    {
      out = mData[(mFront + pos[k]) % mCap];
      break;
    }
    k++;
  }

  for (int i = k + 1; i < pos.size(); ++i)
  {
    if (pos[i] < mSize && comp(mData[(mFront + pos[i]) % mCap], out))
    {
      out = mData[(mFront + pos[i]) % mCap];
    }
  }
  return out;
}

#endif
