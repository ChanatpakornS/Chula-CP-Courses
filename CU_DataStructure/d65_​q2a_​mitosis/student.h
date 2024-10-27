#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack<T> tmp;
    for(int i=0; i < a; ++i) tmp.push(top()), pop();
    for(int i=a; i <=b ;++i) {
        tmp.push(top());
        tmp.push(top());
        pop();
    }
    while(!tmp.empty()) this->push(tmp.top()), tmp.pop();
}
#endif
