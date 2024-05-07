#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    cin >> n;
    int s1, s2, a1, a2;
    int s;
    cin >> s;
    s1 = s2 = a1 = a2 = s;
    for (int i = 1, x; i < n; ++i)
    {
        cin >> s;
        s2 = max(s2 + s, a1 + s);
        a2 = max(s2, a2);
        s1 = max(s1, s1 + s);
        a1 = max(s1, a1);
    }
    cout << a2 << '\n';
}
