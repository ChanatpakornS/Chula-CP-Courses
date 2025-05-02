#include <bits/stdc++.h>
using namespace std;

int n, e;
int a[10005], b[10005];
int r[1005];

int main() {
    cin >> n >> e;

    for (int i=1 ; i <= e; ++i) {
        cin >> a[i] >> b[i];
    }

    int p = 5;
    while(p--) {
        bool ok = true;
        for (int i=1; i <= n; ++i) {
            int x;
            cin >> x;
            //indicate step that do the index tasks
            r[x] = i;
        }

        for (int i=1; i <= e;++i) {
            if (r[a[i]] > r[b[i]]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "SUCCESS\n" : "FAIL\n");
    }

    return 0;
}