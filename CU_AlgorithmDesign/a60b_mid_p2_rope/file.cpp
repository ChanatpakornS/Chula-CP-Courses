#include <bits/stdc++.h>
using namespace std;

int c[4000];
const int INF = 1e6;

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    // array of values of each coins
    // solve
    c[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        c[i] = -INF;
        if (i - x >= 0)
            c[i] = max(c[i], 1 + c[i - x]);
        if (i - y >= 0 && x != y)
            c[i] = max(c[i], 1 + c[i - y]);
        if (i - z >= 0 && (x != z && z != y))
            c[i] = max(c[i], 1 + c[i - z]);
        // cout << "c"<< i << " : " << c[i] << endl;
    }

    cout << c[n];
}