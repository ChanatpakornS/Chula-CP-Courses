#include <bits/stdc++.h>

using namespace std;

bool solve(int virus[], int start, int stop)
{
    if (stop - start == 2)
        return virus[start] == 0 && virus[stop - 1];

    int mid = stop + start >> 1;
    int nsize = mid - start;
    // the back part will be reversed due to mutation
    int rev[nsize];
    for (int i = 0; i < mid - start; ++i)
        rev[i] = virus[mid - i - 1];
    return (solve(rev, 0, mid - start) || solve(virus, start, mid)) && solve(virus, mid, stop);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int l = 1 << k;
    int virus[l];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < l; ++j)
            cin >> virus[j];
        cout << (solve(virus, 0, l) ? "yes\n" : "no\n");
    }

    return 0;
}