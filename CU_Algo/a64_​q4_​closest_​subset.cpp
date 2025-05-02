#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int n, k, minDiff = INF; // amount, target
int a[105], qs[105];

void solve(int i, int m, int s)
{
    if (m == 0) // cannot choose anymore
    {
        minDiff = min(minDiff, abs(k - s));
        return;
    }

    //always be increasing function
    if (i == n) return; //if it recur to n
    if (n - i < m) return; // if it have no choice more than m
    if (s - k + qs[n] - qs[n-m] >= minDiff) return; // if the biggest val produce worse minDiff
    if (k - (s + qs[m]) >= minDiff) return; // if the less item produce worse minDiff

    solve(i + 1, m - 1, s + a[i]);
    solve(i + 1, m, s);
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int m; // choose
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n, greater());
    for (int i = 0; i < n; ++i)
        qs[i + 1] = qs[i] + a[i];

    solve(0, m, 0);

    cout << minDiff;
    return 0;
}