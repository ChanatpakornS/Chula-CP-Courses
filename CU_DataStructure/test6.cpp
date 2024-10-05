#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<char> v = {'a', 'r', 'w', 'y', 'y'};

    sort(v.begin(), v.end(), greater());

    for (auto &x : v)
    {
        cout << x << " ";
    }
}