#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

float max_price(std::map<int, float> &m, int a, int b)
{
    if (a > b)
        return -1.0;
    auto it1 = m.upper_bound(a);
    auto it2 = m.lower_bound(b);
    if (it1 == m.end() || it2 == m.begin())
        return -1.0;
    float maxp = 0;
    for (it1; it1 != it2; ++it1)
    {
        maxp = max(maxp, it1->second);
    }

    return maxp;
}

int main()
{
    map<int, float> m = {{1, 1.5}, {2, 2.5}, {3, 3.5}, {4, 4.5}, {5, 5.5}};
    max_price(m, 2, 4);
    return 0;
}