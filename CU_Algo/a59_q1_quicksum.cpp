#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int A[n][m], p[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];

    p[0][0] = A[0][0];
    for (int j = 1; j < m; ++j)
        p[0][j] = p[0][j - 1] + A[0][j];

    for (int i = 1; i < n; ++i)
    {
        p[i][0] = p[i - 1][0] + A[i][0];
        for (int j = 1; j < m; ++j)
        {
            p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + A[i][j];
        }
    }

    while (k--)
    {
        int r1, r2, c1, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        int x1 = (r2 >= 0 && c2 >= 0) ? p[r2][c2] : 0;
        int x2 = (r1 - 1 >= 0 && c2 >= 0) ? p[r1 - 1][c2] : 0;
        int x3 = (r2 >= 0 && c1 - 1 >= 0) ? p[r2][c1 - 1] : 0;
        int x4 = (r1 - 1 >= 0 && c1 - 1 >= 0) ? p[r1 - 1][c1 - 1] : 0;

        int res = x1 - x2 - x3 + x4;

        cout << res << "\n";
    }

    return 0;
}