#include <bits/stdc++.h>
using namespace std;
int head[1005];

int getHead(int x)
{
    if (head[x] == x)
        return x;
    return head[x] = getHead(head[x]);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int v, e;
        bool res = false;
        cin >> v >> e;
        for (int i = 0; i < v; ++i)
            head[i] = i;
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            int t, tt;
            t = getHead(a);
            tt = getHead(b);
            if (t == tt)
            {
                res = true;
                continue;
            }
            head[tt] = t;
        }
        cout << (res ? "YES\n" : "NO\n");
    }

    return 0;
}