#include <bits/stdc++.h>

using namespace std;

void solve(int n, int k, string tmp, int count, bool out) {
    if (tmp.size() >= n) {
        if (out) cout << tmp << '\n';
        return;
    }

    solve(n, k, tmp + '0', 0, out);
    solve(n, k, tmp + '1', count + 1, (count + 1 >= k || out));
}

int main() {
    int n, k;
    cin >> n >> k;

    solve(n, k, "", 0, false);
}