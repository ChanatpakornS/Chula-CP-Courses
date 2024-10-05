#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  int dis = last - first;
  int start = first - begin();
  int k_new = (int)k % dis;
  std::cout << dis << std::endl;
  std::cout << start << std::endl;
  std::cout << k_new << std::endl;
  if (k == 0)
    return;
  T keeper[dis];
  for (iterator i = first; i != last; i++)
    keeper[i - first] = *i;

  std::cout << "keeper: ";

  for (auto &x : keeper)
    std::cout << x << " ";

  std::cout << std::endl;

  for (int i = 0; i < dis; i++)
  {
    mData[(i - k_new + dis) % dis + start] = keeper[i];
  }
}

#endif
