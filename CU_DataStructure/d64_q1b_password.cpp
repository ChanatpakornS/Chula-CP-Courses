#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M, L;
    cin >> N >> M >> L;

    vector<int> k(L);
    for (int i = 0; i < L; ++i)
    {
        cin >> k[i];
        k[i] %= 26;
    }

    set<string> p;
    for (int i = 0; i < N; ++i)
    {
        string tmp;
        cin >> tmp;
        for (int idx = 0; idx < tmp.size(); ++idx)
        {
            tmp[idx] = (tmp[idx] - k[idx] - 'a' + 26) % 26 + 'a';
        }
        p.insert(tmp);
    }

    for (int i = 0; i < M; ++i)
    {
        string tmp;
        cin >> tmp;

        if (p.count(tmp))
        {
            cout << "Match\n";
        }
        else
        {
            cout << "Unknown\n";
        }
    }

    return 0;
}