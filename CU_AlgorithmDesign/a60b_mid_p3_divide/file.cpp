#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 505;
int s[MAX_N][MAX_N];

int n, k;

int main()
{
    cin >> n >> k;
    // S(n,r) = S(n-1,r-1) + rS(n-1, r)
    for (int i = 1; i <= n; ++i)
    {
        for (int j=1 ; j <= i; ++j) {
            if (i < j) s[i][j] = 0;
            else if (j == 1 || i == j) s[i][j] = 1;
            else s[i][j] = ((s[i - 1][j-1]) % 1997 + (j * s[i-1][j])%1997)%1997;       
        }
    }

    cout << s[n][k];
}
