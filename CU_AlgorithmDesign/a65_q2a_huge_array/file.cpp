#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> vec(n);
    vector<int> idx(n);
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        vec[i] = {a, b};
    }
    sort(vec.begin(), vec.end());
    idx[0] = vec[0].second;
    for (int i = 1; i < n; i++)
    {
        idx[i] = vec[i].second + idx[i - 1];
    }
    // for (auto &i : vec)
    // {
    //     cout << i.first << " |||| " << i.second << '\n';
    // }
    while (q--)
    {
        int a;
        cin >> a;
        cout << vec[lower_bound(idx.begin(), idx.end(), a) - idx.begin()].first << '\n';
    }
}