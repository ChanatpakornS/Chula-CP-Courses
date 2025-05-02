#include <bits/stdc++.h>
using namespace std;

int n, e, k;
vector<int> road[10005];
int vs[1005];
queue<pair<int, int>> q;

int main()
{
    cin >> n >> e >> k;
    // 0 is base
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        road[a].push_back(b);
        // road[b].push_back(a);
    }

    q.push({0, 0}); // dist, loc

    int op = 0;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();

        if (vs[p.second])
        continue;
        vs[p.second] = 1;
        
        int now = p.first;
        if (now == k)
        {
            ++op;
            continue;
        }

        for (int i = 0; i < road[p.second].size(); ++i)
        {
            // cout << road[p.second][i] << endl;
            if (vs[road[p.second][i]]) continue;
            q.push({now + 1, road[p.second][i]});
        }
    }

    cout << op;

    return 0;
}