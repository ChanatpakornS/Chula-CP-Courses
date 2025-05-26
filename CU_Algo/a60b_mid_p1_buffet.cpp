#include <bits/stdc++.h>
using namespace std;

int table[100005];

int main()
{
    int f, w, n;
    int res = 0;
    int start = INT_MAX;
    cin >> f >> w >> n;

    while (f--)
    {
        int x;
        cin >> x;
        table[x] = 1;
        start = min(start, x);
    }

    for (int i = start + 1; i <= n; ++i)
    {
        if (table[i] == 0)
            continue;
        if (start + 2 * w >= i)
            continue;
        ++res;
        start = i;
    }

    cout << res + 1;

    return 0;
}