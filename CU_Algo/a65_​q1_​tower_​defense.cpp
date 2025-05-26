#include <bits/stdc++.h>

using namespace std;

int n, m, k, w;
vector<int> p, h, t;

int solve() {
    for ( int i=0 ; i < p.size() ; ++i) {
        int mp = p[i];
        for (auto &turret: t) {
            if (mp && turret && mp <= turret + w && mp >= turret - w) {
                turret = 0;
                --h[i];
            } else {
                continue;
            }
        }
    }

    return accumulate(h.begin(), h.end(), 0);
}

int main() {
    
    cin>> n >> m >> k >> w;

    p.resize(m);
    h.resize(m);
    t.resize(k);

    for (int i=0 ; i < m; ++i) cin >> p[i];
    for (int i=0 ; i < m; ++i) cin >> h[i];
    for (int i=0 ; i < k; ++i) cin >> t[i];

    sort(t.begin(), t.end());

    cout << solve();

    return 0;
}