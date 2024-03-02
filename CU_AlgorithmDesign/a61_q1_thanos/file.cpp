#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, A, B;

ll solve(vector<int> &vec, ll l, ll r)
{
    ll hero = upper_bound(vec.begin(), vec.end(), r) - lower_bound(vec.begin(), vec.end(), l);
    if (hero == 0)
    {
        return A;
    }
    ll cur = B * (r - l + 1) * hero;
    if (l == r)
        return cur;
    ll m = (r + l) >> 1;
    return min(cur, solve(vec, l, m) + solve(vec, m + 1, r));
}

int main()
{
    cin >> n >> k >> A >> B;
    ll p = (1 << n);
    vector<int> vec(k);
    for (int i = 0; i < k; ++i)
    {
        ll x;
        cin >> x;
        vec[i] = --x;
    }
    sort(vec.begin(), vec.end());
    cout << solve(vec, 0, p - 1);
}