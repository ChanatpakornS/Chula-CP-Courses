#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  int n = (K <  mSize) ? K : mSize;
  mSize -= n;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T> res;
  int n = (K < mSize) ? K : mSize;
  for(int i = mSize - n ; i < mSize; ++i) {
    res.push(mData[i]);
  }

  mSize -= n;

  return res;
}

#endif
