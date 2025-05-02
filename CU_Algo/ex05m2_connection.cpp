#include <bits/stdc++.h>
using namespace std;
int n, e, k, maxx = 0;
vector<int> edge[100005];
int v[1005];
int c;

void dfs(int x, int level)
{
    if (level > k)
        return;
    if (v[x] == 0)
        c++;
    v[x] = 1;
    for (auto &con : edge[x])
    {
        dfs(con, level + 1);
    }
    return;
}

int main()
{
    cin >> n >> e >> k;
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    for (int i = 0; i < n; ++i)
    {
        c = 0;
        for (int j = 0; j < n; ++j)
            v[j] = 0;
        dfs(i, 0);
        maxx = max(maxx, c);
    }

    cout << maxx;

    return 0;
}