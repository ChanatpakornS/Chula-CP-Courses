#include <bits/stdc++.h>
using namespace std;

const int MOD = 16777216;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int x, cnt = 0;
    cin >> x;

    int diff = MOD - x;

    while(x) {
        if (x == 1 || x % 2 == 0) x /= 2;
        else x += 1;
        cnt++;
    }

    cout << min(cnt, diff);

    return 0;
}