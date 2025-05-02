#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int modder = 32717;

int main()
{
    int n, k;
    int res = 0;
    cin >> k >> n;

    int DP[n + 1];
    vector<int> c(k);

    for (int i = 0; i < k; ++i)
        cin >> c[i];
    for (int i = 0; i < k; ++i)
        cin >> DP[i];

    for (int i = k; i <= n; ++i)
    {
        long long tmp = 0;
        for (int j = 0; j < k; ++j)
        {
            tmp += ((c[j] * DP[i - j - 1]));
            tmp %= modder;
        }
        DP[i] = (int) tmp;
    }

    cout << DP[n];

    return 0;
}