#include <iostream>
#include <vector>

using namespace std;

int bsrp(vector<int> &vec, int q, int start, int stop)
{
    if (start == stop)
    {
        int i = 1;
        while (vec[start] == vec[start + i])
        {
            i++;
        }
        return vec[start] == q ? start + i - 1 : start - 1;
    }
    int m = (start + stop) >> 1;
    if (vec[m] >= q)
        return bsrp(vec, q, start, m);
    else
        return bsrp(vec, q, m + 1, stop);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        vec[i] = a;
    }

    for (int j = 0; j < m; j++)
    {
        int q;
        cin >> q;
        if (q < vec[0])
        {
            cout << -1 << '\n';
        }
        else if (vec[n - 1] <= q)
        {
            cout << n - 1 << '\n';
        }
        else
        {
            cout << bsrp(vec, q, 0, n - 1) << '\n';
        }
    }
}