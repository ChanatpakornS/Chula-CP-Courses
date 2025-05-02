#include <bits/stdc++.h>
using namespace std;

const int MOD = 16777216; // 1 << 24; limit 23 

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int x, cnt = 0;
    cin >> x;
    queue<pair<int,int>> q;
    q.push({0, x});

    while(!q.empty()) {
        int val = q.front().second;
        int ctmp = q.front().first;
        q.pop();
        if (!val) {
            cnt = ctmp;
            break;
        }

        q.push({ctmp + 1, (val << 1) % MOD});
        q.push({ctmp + 1, (val + 1) % MOD});
    }

    cout << cnt;

    return 0;
}