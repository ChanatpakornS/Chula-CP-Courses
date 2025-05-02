#include <bits/stdc++.h>
using namespace std;

int n, K[8];
vector<pair<int, int>> graph[25];
bool visited[20];

bool solve(int step, int tot, int target)
{
    if (tot > target)
        return false;
    if (tot == target)
        return true;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int m;
    cin >> n >> m;
    for (int i = 0; i < 8; ++i)
        cin >> K[i];

    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({c, b});
        graph[b].push_back({c, a});
    }

    for (int i = 0; i < 8; ++i)
    {
        bool ok = false;
        for (int j = 0; j < n; ++j)
        {
            visited[j] = true;
            ok |= solve(j, 0, K[i]);
            visited[j] = false;

            if (ok)
                break;
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}