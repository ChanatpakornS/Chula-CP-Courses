#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int bs(vector<int> &vec, int query, int start, int stop)
{
    if (start == stop)
    {
        // printf("%d", vec[start]);
        return vec[start] == query ? vec[start] : vec[start - 1];
    }
    int m = (start + stop) >> 1;
    if (vec[m] >= query)
        return bs(vec, query, start, m);
    else
        return bs(vec, query, m + 1, stop);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
       int a;
       cin >> a;
       arr[i] = a;
    }

    int a;
    for (int i = 0; i < m; ++i)
    {
        int query;
        scanf("%d", &query);
        if (query >= arr[n - 1])
        {
            printf("%d\n", arr[n - 1]);
        }
        else if (query < arr[0])
        {
            printf("%d\n", -1);
        }
        else
        {
            cout << bs(arr, query, 0, n - 1) << '\n';
        }
    }
}
