#include <bits/stdc++.h>
using namespace std;

const int mx = (1 << 8) + 5;
int matrix[mx][mx];

void recur(int a, int b, int top, int bottom, int left, int right)
{
    if (a == 0)
    {
        matrix[left][top] = b;
        return;
    }

    int y = (top + bottom) / 2;
    int x = (left + right) / 2;
    recur(a - 1, b, top, y, left, x);
    recur(a - 1, b + 1, top, y, x + 1, right);
    recur(a - 1, b, y + 1, bottom, x + 1, right);
    recur(a - 1, b - 1, y + 1, bottom, left, x);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int p = 1 << a;
    // d & c
    recur(a, b, 0, p - 1, 0, p - 1);

    // print
    for (int i = 0; i < p; ++i)
    {
        for (int j = 0; j < p; ++j)
            cout << matrix[i][j] << " ";
        cout << '\n';
    }
    return 0;
}