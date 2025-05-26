#include <bits/stdc++.h>
using namespace std;

int n, k;
int minVal = INT_MAX;

// start from store 0
void solve(int store, int spend, vector<int> collect, vector<int> &price, vector<int> &amount, vector<int> list[])
{
    // backtracking
    bool ok = true;
    for (int i = 1; i <= n; ++i)
    {
        if (collect[i] == 0)
            ok = false;
    }
    if (ok)
    {
        minVal = min(minVal, spend);
        return;
    }
    if (spend > minVal || store >= k)
        return;

    // not buy
    solve(store + 1, spend, collect, price, amount, list);

    // buy
    for (int i = 0; i < list[store].size(); ++i)
    {
        collect[list[store][i]] += 1;
    }
    solve(store + 1, spend + price[store], collect, price, amount, list);
}

int main()
{
    // n is total vol;
    cin >> n >> k;

    vector<int> collect(n + 1, 0);
    vector<int> pr(n), am(n), list[k];
    // vector<vector<int>> list(n, vector<int>());

    for (int i = 0; i < k; ++i)
    {
        int p, amount;
        cin >> p >> amount;
        pr[i] = p;
        am[i] = amount;

        for (int s = 0; s < amount; ++s)
        {
            int vol;
            cin >> vol;
            list[i].push_back(vol);
        }
    }

    solve(0, 0, collect, pr, am, list);

    cout << minVal;

    return 0;
}