#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const
{
  // write your code here
  auto itcmp = it - &mData[0];
  if(mSize && itcmp >= 0 && itcmp < mSize) return true;
  return false;;
}

#endif
