#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, 0));
    vector<int> res(n);
    int mx = 0;

    for (int i = 0; i < n; ++i)
    {
        int nr = 0;
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
            nr += mat[i][j];
        }

        mx = max(mx, nr);
        ++res[nr];
    }

    for (int i = 0; i <= mx; ++i)
        cout << res[i] << " ";

    return 0;
}