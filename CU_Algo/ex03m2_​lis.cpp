#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int dp[1005][1005];

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    vector<int> sref(vec);
    sort(sref.begin(), sref.end());


    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (sref[i - 1] == vec[j - 1])
            {
                dp[i][j] = max(dp[i][j - 1] + 1, dp[i - 1][j]);
            }
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    // for (int i = 0; i <= n; ++i)
    // {
    //     for (int j = 0; j <= n; ++j)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[n][n];

    return 0;
}