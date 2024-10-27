#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <set>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  // write your code here
  std::set<std::pair<int, T>> s(data.begin(), data.end());
  auto it = s.begin();
  int ext = 0;
  T *arr = new T[mSize + data.size()]();
  for (int i = 0; i < (int)mSize; i++)
  {
    if (i == it->first)
    {
      arr[i + ext++] = (it++)->second;
    }
    arr[i + ext] = mData[i];
  }
  if (it->first == mSize)
    arr[mSize + ext] = (it)->second;
  delete[] mData;
  mData = arr;
  mSize += data.size();
  mCap = mSize;
}

#endif
