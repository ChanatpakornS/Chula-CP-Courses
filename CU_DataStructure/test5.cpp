#include <iostream>
#include <set>
#include <typeinfo>

using namespace std;

int main()
{

    set<int> s = {1, 2, 3, 4, 5, 6};

    auto it = next(s.begin(), 3);

    cout << &it << endl;

    s.erase(it);

    cout << typeid(*it).name() << endl;
    cout << &it << endl;

    for (auto &x : s)
    {
        cout << x << " ";
    }

    return 0;
}