#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  if(m <= 0) return;
  m = std::min(m, (int)s2.size());
  expand(mSize + m);
  mSize += m;
  for (int i = mSize - 1; i >= mSize - k; --i)
    mData[i] = mData[i - m];

  for (int i = 0; i < m; i++)
    mData[mSize - k - 1 - i] = s2.top(), s2.pop();
}
#endif
