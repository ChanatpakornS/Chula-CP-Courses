#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    set<int> s(A.begin(), A.end());
    for (auto &x : A)
        v.push_back(x);
    for (auto &x : B)
        if (!s.count(x))
            v.push_back(x);

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    set<int> s(B.begin(), B.end());
    for (auto &x : A)
        if (s.count(x))
            v.push_back(x);

    return v;
}
