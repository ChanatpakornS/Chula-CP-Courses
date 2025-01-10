#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  int n = mSize;
  iterator itn = begin(), itp = --end();
  for(int i=1 ; i <= n ; ++i) {
    if (itn.ptr->next == NULL) return false;
    if (itp.ptr->prev == NULL) return false;
  }
  return itn == itp;
}


#endif
