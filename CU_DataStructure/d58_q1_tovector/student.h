#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  int n = (k > size()) ? size() : k;
  for(int i=0 ; i < n ;++i) {
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  size_t n = to - from;
  mData = new T[n]();
  mFront = 0;
  mCap = n;
  mSize = n;
  int i =0;
  for(iterator it = from; it != to; it++) {
    mData[i++] = *it;
  }
}

#endif
