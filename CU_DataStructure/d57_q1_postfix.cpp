#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
    vector<int> stack;
    stack.reserve(v.size());

    for (const auto &i : v) {
        if(i.first == 1) {
            stack.push_back(i.second);
        } else {
            int tmpy = stack.back(); stack.pop_back();
            int tmpx = stack.back(); stack.pop_back();

            switch (i.second)
            {
            case 0:
                tmpx += tmpy;
                break;
            case 1:
                tmpx -= tmpy;
                break;
            case 2:
                tmpx *= tmpy;
                break;
            case 3:
                tmpx /= tmpy;
                break;
            default:
                break;
            }

            stack.push_back(tmpx);

        }
    }

    return stack[0];
}

#endif
