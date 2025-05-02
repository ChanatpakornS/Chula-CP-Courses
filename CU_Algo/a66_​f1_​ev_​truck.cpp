#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 505;
const int MAX = 1e9 + 7;

int n, m;
int dp[505][505];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j)
                dp[i][j] = MAX;

    for (int i = 0; i < m; ++i)
    {
        int a, b, e;
        cin >> a >> b >> e;
        dp[a][b] = e;
        dp[b][a] = e;
    }

    for (int _ = 1; _ <= 3; ++_)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                for (int k = 0; k < n; ++k)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }

    int res = -MAX;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            res = max(res, dp[i][j]);
        }

    cout << res;

    return 0;
}