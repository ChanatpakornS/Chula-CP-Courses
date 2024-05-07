#include <bits/stdc++.h>
using namespace std;

int c[4000];

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    // solve
    c[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        c[i] = 0;
        if (i - x >= 0)
            c[i] = max(c[i], 1 + c[i - x]);
        if (i - y >= 0)
            c[i] = max(c[i], 1 + c[i - y]);
        if (i - z >= 0)
            c[i] = max(c[i], 1 + c[i - z]);
        // cout << "c"<< i << " : " << c[i] << endl;
    }

    cout << c[n];
}