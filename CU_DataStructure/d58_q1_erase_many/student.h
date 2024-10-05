#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos)
{
  // write your code here
  size_t erase_count = 0;
  for (size_t i = 0; i < mSize; ++i)
  {
    if (erase_count < pos.size() && i == pos[erase_count])
      erase_count++;
    else
      mData[i - erase_count] = mData[i];
  }
  mSize -= pos.size();
}

#endif
