#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  ensureCapacity(mSize + 1);
  int npos = ( mSize - pos > 0) ? mSize - pos : 0;
  for(int i = mSize ; i > npos ; --i) {
    mData[i] = mData[i-1];
  }

  mData[npos] = value;
  mSize++;
}

#endif
