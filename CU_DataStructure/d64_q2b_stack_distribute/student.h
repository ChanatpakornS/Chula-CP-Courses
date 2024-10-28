#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> res(k);
  int mi = mSize / k;
  int ma = mSize % k;
  int tp = mSize - 1;
  for(int i = 0 ; i < k; ++i) {
    for(int j=0 ; j < mi + (i < ma) ; ++j) {
      res[i].push_back(mData[tp--]);
    }
  }

  return res;
}
#endif
