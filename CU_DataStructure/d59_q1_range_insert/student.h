#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int dis = last - first;
  int pos = position - begin();
  ensureCapacity(mSize + dis);
  for(int i = pos; i < mSize ; ++i)
    mData[i + dis] = mData[i];
  
  for(int i=0 ; i < dis; ++i)
    mData[pos + i] = *(first + i);

  
  mSize += dis;
}