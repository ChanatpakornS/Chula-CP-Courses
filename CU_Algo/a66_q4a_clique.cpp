#include <bits/stdc++.h>
using namespace std;

int n, ans;
int b[55], qb[55];
bitset <55> f[55]; // 50x50 maximum usage

void solve(int i, int sum, bitset<55> s, bitset<55> chosen) {
    if (i==n) return void(ans = max(ans, sum));
    if (sum + qb[i] <= ans) return; //pruning

    chosen[i] = 1;
    if ((s & f[i] & chosen) == chosen) solve(i+1, sum+b[i], s & f[i], chosen);
    chosen[i] = 0;

    solve(i+1, sum, s, chosen);

}

int main()
{
    cin.tie(0)->sync_with_stdio(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            f[i][j] = x;
        }

    qb[n-1] = b[n-1];
    for(int i=n-2; i >=0;--i) qb[i] = qb[i+1] + b[i];
    
    // mem, pow, avaliability of member / the relation, who is chosen
    solve(0, 0, bitset<55>().set(), bitset<55>());

    cout << ans;

    return 0;
}
