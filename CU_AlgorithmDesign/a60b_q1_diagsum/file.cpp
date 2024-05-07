#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e3;
const int INF = 1e6;
int matrix[MAX_N][MAX_N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    }

    return 0;
}