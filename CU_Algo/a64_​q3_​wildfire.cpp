#include <bits/stdc++.h>
using namespace std;

int f[5005]; // field
vector<int> wind[20005];
int wf[5005]; // wild fire
int tot = 0;

int dfs(int u)
{
    int dmg = f[u];
    f[u] = 0;
    for (auto &next : wind[u])
    {
        if (f[next])
            dmg += dfs(next);
    }

    return dmg;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> f[i];
        tot += f[i];
    }
    for (int i = 0; i < k; ++i)
        cin >> wf[i];
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        wind[a].push_back(b);
    }

    for (int i = 0; i < k; ++i)
    {
        if (f[wf[i]])
            tot -= dfs(wf[i]);
        cout << tot << ' ';
    }

    return 0;
}