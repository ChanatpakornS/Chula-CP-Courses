#include <bits/stdc++.h>
using namespace std;

int c[705][705];
int n;
const int MAX = 1e9;

int main()
{
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            c[i][j] = MAX;

    cin >> c[1][2];
    c[2][1] = c[1][2];

    for (int i = 3; i <= n; ++i)
    {
        int k;
        cin >> k;
        while (k--)
        {
            int t, p;
            cin >> t >> p; // where, price
            c[i][t] = p;
            c[t][i] = p;
        }
    }

    for (int k = 1; k <= n; ++k)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
        if (k >= 3)
            cout << c[1][2] << " ";
    }

    return 0;
}
