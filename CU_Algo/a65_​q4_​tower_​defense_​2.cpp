#include <bits/stdc++.h>
using namespace std;

int n, m, k, w;
int p[1000005], h[1000005], idx[1000005];

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    cin >> n >> m >> k >> w;

    for (int i = 0; i < m; ++i)
        cin >> p[i]; // position
    for (int i = 0; i < m; ++i)
        cin >> h[i]; // power

    iota(idx, idx + m, 0);

    // greedy
    sort(idx, idx + m, [&](const int &a, const int &b)
         { return p[a] < p[b]; });

    int i = 0, j = 0;
    while (i <= n and j < m and k > 0)
    {
        int x = max(i + 1, p[idx[j]] - w);
        if (x <= n and x - w <= p[idx[j]] and h[idx[j]] > 0)
        {
            h[idx[j]]--;
            k--;
            i = x;
        }
        else
            ++j;
    }

    int ans = 0;
    for (int i = 0; i < m; ++i)
        ans += h[i];

    cout << ans;

    return 0;
}