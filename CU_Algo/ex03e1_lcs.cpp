#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int dp[505][505];

int main()
{
    string a, b;
    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

            if (a[i - 1] == b[j - 1])
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
        }
    }

    cout << dp[n][m];

    return 0;
}