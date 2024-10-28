#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T, size_t> count;
    for(int i=0 ; i < mSize ;++i)
        count[mData[(mFront + i) % mCap]]++;
    
    std::vector<std::pair<T,size_t>> res;
    for(auto &x: k)
        res.push_back({x, count[x]});

    return res;
}

#endif
