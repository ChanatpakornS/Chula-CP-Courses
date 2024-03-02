#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool cv(int arr[], int start, int stop)
{
    if (start == stop - 2)
    {
        return arr[start] == 0 && arr[stop - 1] == 1;
    }

    int m = (start + stop) >> 1;
    int rev[m];
    for (int i = start; i < m; ++i)
    {
        rev[i] = arr[m - 1 - i];
    }
    return (cv(rev, start, m) || cv(arr, start, m)) && cv(arr, m, stop);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int p = 1 << k;
    int virus[p];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> virus[j];
        }
        string res = cv(virus, 0, p) ? "yes\n" : "no\n";
        cout << res;
    }
}