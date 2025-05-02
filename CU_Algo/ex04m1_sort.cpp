#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0, st = 0, ed = n - 1;
    while (st <= ed)
{
    if (a[st] == 1)
        st++;
    else if (a[ed] == 3)
        ed--;
    else if (a[st] == 3 && a[ed] == 1)
    {
        swap(a[st], a[ed]);
        ++ans;
        st++;
        ed--;
    }
    else if (a[st] == 3 && a[ed] == 2)
    {
        swap(a[st], a[ed]);
        ++ans;
        ed--;
    }
    else if (a[st] == 2 && a[ed] == 1)
    {
        swap(a[st], a[ed]);
        ++ans;
        st++;
    }
    else
    {
        st++;
        ed--;
    }
}

    cout << ans;
}