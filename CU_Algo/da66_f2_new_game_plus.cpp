#include <iostream>
#include <vector>

using namespace std;

int MOD = 100000007;
int dir[3] = {-1, 0, 1};
int maze[505][505];
int r, c;

// state = [1,2,3]
int help(int x, int y, int prev)
{
    if (y == c)
        return 1;

    int tot_p = 0;
    for (int sel = 0; sel < 3; ++sel)
    {
        int ni = x + dir[sel];
        int nj = y + 1;
        if ((0 <= ni <= r) && (y == 1 or sel != prev) && !maze[ni][nj])
            tot_p += help(ni, nj, sel) % MOD;
    }

    tot_p %= MOD;

    return tot_p;
}

int main()
{
    cin >> r >> c;

    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            cin >> maze[i][j];

    int res = 0;
    for (int i = 1; i <= r; ++i)
    {
        if (!maze[i][1])
        {
            res += help(i, 1, -1) % MOD;
            res %= MOD;
        }
    }

    cout << res;

    return 0;
}