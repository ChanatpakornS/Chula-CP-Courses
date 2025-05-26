#include <bits/stdc++.h>

using namespace std;

void solve(int total, int bar, string tmp, int c)
{
    if (tmp.size() == total)
    {
        if (c == bar)
            cout << tmp << '\n';

        return;
    }

    if (c <= bar)
    {
        solve(total, bar, tmp + '0', c);
        solve(total, bar, tmp + '1', c + 1);
    }
}

int main()
{
    int A, B;
    cin >> A >> B;

    solve(B, A, "", 0);

    return 0;
}