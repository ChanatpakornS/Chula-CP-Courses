#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    string a = "", b = "";
    for (int i = 0; i < n; ++i)
    {
        char x;
        cin >> x;
        a += x;
    }
    for (int i = 0; i < m; ++i)
    {
        char x;
        cin >> x;
        b += x;
    }

    int dp[n + 1][m + 1]; // A as row, B as col

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            cin >> dp[i][j];
        }
    }

    // backtracking
    int tk = dp[n][m];
    string bt = "";
    int rt = n, ct = m;
    while(tk != 0 && ct != 0) {
        if (tk != dp[rt][ct-1]) {
            bt += b[ct-1];
            tk = dp[rt][ct-1];
        }
        ct--;
    }

    reverse(bt.begin(), bt.end());

    cout << bt << '\n';

    return 0;
}