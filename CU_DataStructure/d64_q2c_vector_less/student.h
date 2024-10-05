#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{
  // write your code here
  //  if you use std::vector, your score will be half (grader will report score BEFORE halving)
  iterator other_it = &other.mData[0];
  iterator it = &mData[0];
  if (other_it == it)
    return false;

  size_t idx = 0;
  while(idx < mSize && idx < other.size()) {
    if(mData[idx] < other[idx]) return true;
    if(mData[idx] > other[idx]) return false;
    idx++;
  }

  return  mSize < other.size();

}

#endif
