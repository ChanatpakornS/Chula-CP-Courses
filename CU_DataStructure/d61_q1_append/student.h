#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *data_swp = new T[s.mSize + mSize];
        for(int i=0 ; i<s.mSize; ++i)
            data_swp[i] = s.mData[i];
        
        for(int i=0 ; i<mSize; ++i)
            data_swp[s.mSize + i] = mData[i];

        std::swap(mData, data_swp);
        mSize += s.mSize;
        mCap = (mSize > 2 * mCap) ? mSize : 2 * mCap;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *data_swp = new T[q.mSize + mSize];
        for(int i=0 ;i<q.mSize ; ++i)
            data_swp[q.mSize -i -1] = q.mData[(q.mFront + i) % q.mCap];
        
        for(int i=0 ;i < mSize ; ++i)
            data_swp[q.mSize + i] = mData[i];

        std::swap(data_swp, mData);
        mSize += q.mSize;
        mCap = (mSize > 2 * mCap) ? mSize : 2*mCap;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        T *data_swp = new T[s.mSize + mSize];
        for(int i=0; i < mSize; i++)
            data_swp[i] = mData[(mFront + i) % mCap];
        
        for(int i=0; i < s.size(); ++i)
            data_swp[i +mSize] = s.mData[s.mSize - i - 1];

        std::swap(data_swp, mData);
        mSize += s.mSize;
        mCap = (mSize > 2 * mCap) ? mSize : 2*mCap;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        T *data_swp = new T[q.mSize + mSize];
        for(int i=0 ; i < mSize; ++i)
            data_swp[i] = mData[(mFront + i) % mCap];
        
        for(int i=0 ; i < q.mSize; ++i)
            data_swp[i + mSize] = q.mData[(q.mFront + i) %q.mCap];

        std::swap(data_swp, mData);
        mSize += q.mSize;
        mCap = (mSize > 2 * mCap) ? mSize : 2*mCap;
    }
}
