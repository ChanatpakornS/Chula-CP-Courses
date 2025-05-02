#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
int n, m, k; // station, train, placett
int travel[10];
int dist[505][505];
int dp[1 << 10][10];
vector<pair<int, int>> train[505];

void dijkstra(int src)
{
    priority_queue<pair<int, int>> pq;
    vector<int> d(n + 1, INF);
    d[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        int cost = -pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (cost > d[u])
            continue;

        for (auto [des, c] : train[u])
        {
            if (d[des] > d[u] + c)
            {
                d[des] = d[u] + c;
                pq.push({-d[des], des});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        dist[src][i] = d[i];
    }
}

int tsp(int mask, int last, vector<vector<int>> &dp)
{
    if (mask == (1 << k) - 1)
        return 0;
    if (dp[mask][last] != -1)
        return dp[mask][last];

    int res = INF;
    for (int i = 0; i < k; ++i)
        if (!(mask & (1 << i)))
            res = min(res, dist[travel[last]][travel[i]] + tsp(mask | (1 << i), i, dp));

    return dp[mask][last] = res;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    cin >> n >> m >> k;
    for (int i = 0; i < k; ++i)
        cin >> travel[i];
    for (int i = 1; i <= m; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        train[a].push_back({b, c});
        train[b].push_back({a, c});
    }

    // Dijkstra to all starting node for finding the optimal path for every path
    for (int i = 1; i <= n; ++i)
        dijkstra(i);

    // Solve using Bitmask DP (k place)
    for (int i = 0; i < (1 << k); ++i)
        for (int j = 0; j < k; ++j)
            dp[i][j] = -1;

    vector<vector<int>> dp(1 << k, vector<int>(k, -1));
    int result = INF;
    for (int i = 0; i < k; i++)
    {
        result = min(result, tsp(1 << i, i, dp));
    }

    cout << result;

    return 0;
}