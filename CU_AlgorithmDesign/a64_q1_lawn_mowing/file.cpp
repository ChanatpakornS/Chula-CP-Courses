#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAX_N = 5e5 + 5;

ll arr[MAX_N];

int main()
{
    int n, m, k;
    ll a, b;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1] + k;
    }
    while (m--)
    {
        cin >> a >> b;
        int r = upper_bound(arr + a, arr + n, arr[a - 1] + b) - arr - 1;
        //cout << "index: " << r << '\n';
        cout << arr[r] - arr[a - 1] - (r - a + 1) * k << "\n";
    }
}
// - arr[a] - (r - a + 1) * k;