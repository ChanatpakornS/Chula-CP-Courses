#include <bits/stdc++.h>
using namespace std;

vector<int> ways[250005];

void bfs(int st, vector<int> &path) {
    queue<pair<int,int>> q;
    q.push({0, st});
    while (!q.empty()) {
        int m = q.front().first;
        int cur = q.front().second;
        q.pop();

        if (path[cur] != INT_MAX) continue;
        path[cur] = m;

        for (auto next: ways[cur]) {
            q.push({m+1, next});
        }
    }
}


int main() {
    int n, t1, t2, t3;
    cin >> n;
    cin >> t1 >> t2 >> t3;

    for (int i=1; i <= n; ++i) {
        int x;
        cin >> x;
        while(x--) {
            int w;
            cin >> w;
            ways[i].push_back(w);
        }
    }

    vector<int> d1(n + 5, INT_MAX), d2(n + 5, INT_MAX), d3(n + 5, INT_MAX);
    bfs(t1, d1);
    bfs(t2, d2);
    bfs(t3, d3);

    int ans = INT_MAX;
    for (int i=1; i<=n; ++i) {
        if (d1[i] == INT_MAX || d2[i] == INT_MAX || d3[i] == INT_MAX) continue;
        ans = min(ans, max({d1[i], d2[i], d3[i]}));
    }

    cout << ans;
    return 0;
}