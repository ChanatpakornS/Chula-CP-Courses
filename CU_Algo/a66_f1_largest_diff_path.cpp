#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2005;

int n, m;
int maxDiff[MAX_N];
int c[MAX_N];
int res = INT_MIN;
vector<int> E[MAX_N];

int dfs(int node, int minVal)
{
    if (maxDiff[node] != -1)
        return maxDiff[node];
    maxDiff[node] = c[node];
    minVal = min(minVal, c[node]);
    for (auto x : E[node])
    {
        maxDiff[node] = max(maxDiff[node], dfs(x, minVal));
    }

    res = max(res, maxDiff[node]- minVal);
    return maxDiff[node];
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> c[i];
    for (int i = 0; i < n; ++i)
        maxDiff[i] = -1;
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        E[a].emplace_back(b);
    }

    for (int i = 0; i < n; ++i)
        if (maxDiff[i] == -1)
            dfs(i, c[i]);

    cout << res;

    return 0;
}