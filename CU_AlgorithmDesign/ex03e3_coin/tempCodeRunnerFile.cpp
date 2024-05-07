#include <bits/stdc++.h>
using namespace std;

int a[25];
int c[10005];

int main()
{
    int n, m;
    cin >> n >> m;
    // array of values of each coins
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // solve
    c[0] = 0;
    for (int i = 1; i <= m; ++i)
    {
        c[i] = m;
        for (int j = 0; j < n; ++j)
        {
            if (c[i] - a[j] < 0)
                continue;
            c[i] = min(c[i], 1 + c[i - a[j]]);
        }
        // cout << "c"<< i << " : " << c[i] << endl;
    }

    cout << c[m];
}