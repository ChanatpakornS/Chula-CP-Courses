#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(m <= 0 || m > mSize/2) return false;
  int av = a - begin();
  int bv = b - begin();
  if (av < 0 || av + m > mSize) return false;
  if (bv < 0 || bv + m > mSize) return false;
  if (av >= bv && bv + m - 1 >= av) return false;
  if(bv >= av && av + m - 1 >= bv) return false;

  for (int i=0 ; i < m; ++i) {
    std::swap(mData[av + i], mData[bv + i]);
  }

  return true;
}

#endif
