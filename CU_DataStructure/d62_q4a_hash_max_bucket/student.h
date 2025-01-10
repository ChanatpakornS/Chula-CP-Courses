#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename HasherT,
          typename EqualT>
size_t CP::unordered_map<KeyT, MappedT, HasherT, EqualT>::max_bucket_length()
{
    size_t res = 0;
    for (int i = 0; i < mBuckets.size(); ++i)
    {
        res = std::max(res, mBuckets[i].size());
    }

    return res;
}

#endif
