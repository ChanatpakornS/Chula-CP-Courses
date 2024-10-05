#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::unordered_set<T> tmp_set;
  size_t idx = 0;
  for(size_t i=0 ; i < mSize ; ++i) {
    if(!tmp_set.count(mData[i]))
      mData[idx++] = mData[i],
      tmp_set.insert(mData[i]);
  }

  mSize = idx;
}

#endif
