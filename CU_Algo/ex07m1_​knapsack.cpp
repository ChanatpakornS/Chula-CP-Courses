#include <bits/stdc++.h>
using namespace std;

int n;
double w, ans, val[105], weight[105];
pair<double, int> ra[105];

double _possible(int lv, double left)
{
    double ret = 0; // return the value
    while (lv < n && left > 0)
    {
        int curr = ra[lv].second;
        if (left >= weight[curr])
        {
            ret += val[curr];
            left -= weight[curr];
        } else {
            ret += ra[lv].first * left;
            break;
        }
        ++lv;
    }

    return ret;
}

void solve(int lv, double v, double wght)
{
    if (wght > w)
        return;
    ans = max(ans, v);

    if (lv == n + 1)
        return;
    if (v + _possible(lv, w - wght) < ans)
        return;

    solve(lv + 1, v + val[ra[lv].second], wght + weight[ra[lv].second]);
    solve(lv + 1, v, wght);
}

int main()
{
    cin >> w >> n;
    for (int i = 0; i < n; ++i)
        cin >> val[i];
    for (int i = 0; i < n; ++i)
        cin >> weight[i];
    for (int i = 0; i < n; ++i)
        ra[i] = {val[i] / weight[i], i};

    sort(ra, ra + n, greater());

    solve(0, 0, 0);

    printf("%.4f", ans);

    return 0;
}