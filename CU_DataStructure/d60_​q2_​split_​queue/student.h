#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
// #pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector<CP::queue<T>> CP::queue<T>::split_queue(int k)
{
    std::vector<CP::queue<T>> qs(k);
    int v_idx = 0;
    for (int i = 0; i < mSize; ++i)
    {
        qs[(v_idx) % k].push(mData[(mFront + i) % mCap]);
        v_idx++;
    }
    mSize = 0;
    return qs;
}

#endif
