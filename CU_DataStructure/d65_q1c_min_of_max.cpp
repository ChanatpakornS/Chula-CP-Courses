#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    vector<int> powers(N);
    vector<int> types(M);

    for (int i = 0; i < N; ++i)
    {
        cin >> powers[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> types[i];
    }

    set<pair<int, int>> s;
    vector<int> p(M, 1);
    vector<int> res;

    for (int i = 0; i < M; ++i)
        s.insert({p[i], i});

    for (int i = 0; i < N; ++i)
    {
        s.erase({p[types[i]], types[i]});
        p[types[i]] = std::max(powers[i], p[types[i]]);
        s.insert({p[types[i]], types[i]});
        res.push_back(s.begin()->first);
    }

    for (auto &x : res)
        cout << x << " ";

    return 0;
}