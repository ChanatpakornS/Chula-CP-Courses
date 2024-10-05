#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value)
{
  // Your code here
  if(mSize != 0) {
  int insert_idx = std::lower_bound(aux.begin(), aux.end(), index) - aux.begin();
  if(insert_idx > 0) index -= aux[insert_idx - 1];
  
  mData[insert_idx].insert(mData[insert_idx].begin() + index, value.begin(), value.end());
  
  for(size_t i = insert_idx; i < aux.size() ; ++i) aux[i] += value.size();
  
  if(mData[insert_idx].size() > 50)
  mData.insert(mData.begin() + insert_idx + 1, {mData[insert_idx].begin() + 50, mData[insert_idx].end()}), mData[insert_idx].resize(50),
  aux.insert(aux.begin() + insert_idx + 1, (insert_idx ? aux[insert_idx-1] : 0) + 50 + mData[insert_idx+1].size()), aux[insert_idx] = 50 + (insert_idx ? aux[insert_idx-1] : 0);
  mSize=mCap=aux.back();}

  if(mSize == 0) mData.push_back(value), aux.push_back(value.size()), mSize=mCap=value.size();

  // debug();
}

#endif