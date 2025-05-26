#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];

struct keeper
{
    int node;
    int weight;
    set<int> col;
};

bool solve(int ele, vector<vector<pair<int, int>>> &edge)
{
    bool ok = false;
    for (int i = 0; i < edge.size(); ++i)
    {
        if (edge[i].size() == 0)
            continue;
        queue<keeper> q;
        set<int> init;
        init.insert(i);
        q.push({i, 0, init}); // node, weight, col

        while (!q.empty())
        {
            int node = q.front().node;
            int tot = q.front().weight;
            set<int> collector = q.front().col;
            q.pop();

            if (tot > arr[ele])
                continue;
            if (tot == arr[ele])
            {
                ok = true;
                break;
            }

            for (auto &nw : edge[node])
            {
                if (edge[node].size() == 0)
                    continue;

                int next = nw.first;
                int weight = nw.second;

                if (!collector.count(next))
                {
                    set<int> ncol = collector;
                    ncol.insert(next);
                    q.push({next, weight + tot, ncol});
                }
            }
        }

        if (ok)
            break;
    }

    return ok;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;

    vector<vector<pair<int, int>>> edge(n, vector<pair<int, int>>());

    for (int i = 1; i <= 8; ++i)
    {
        cin >> arr[i];
    }

    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        // node, weight
        edge[a].push_back({b, w});
        edge[b].push_back({a, w});
    }

    // for (int i=0 ; i < edge.size(); ++i) {
    //     for (auto ele: edge[i]) {
    //         cout << ele.first << ' ';
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 8; ++i)
    {
        bool ok = solve(i, edge);
        cout << ((ok) ? "YES\n" : "NO\n");
    }

    return 0;
}