#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
  // write your code here
  ensureCapacity(2 * mSize);
  mSize = 2 * mSize;
  for (int i = mSize / 2 - 1; i >= 0; --i)
  {
    mData[mSize - i - 1] = mData[i];
  }
}

#endif
