#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int futomaki[n + 5];
    int dp[n + 5][n + 5];

    for (int i = 1; i <= n; ++i)
        cin >> futomaki[i];

    for (int sz = 2; sz <= n; ++sz)
    {
        for (int l = 1, r = sz; r <= n; ++l, ++r)
        {
            dp[l][r] = max(
                {
                    dp[l][r - 2] + max(futomaki[r - 1], futomaki[r]),
                    dp[l + 1][r - 1] + max(futomaki[l], futomaki[r]),
                    dp[l + 2][r] + max(futomaki[l], futomaki[l + 1])
                });
        }
    }

    cout << dp[1][n] << endl;

    return 0;
}