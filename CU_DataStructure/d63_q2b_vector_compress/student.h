#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    CP::vector<T> reserve(size());
    for(int i=0 ; i < mSize ; ++i) reserve[i] = mData[i]; 
    std::swap(mData, reserve.mData);
}

#endif
