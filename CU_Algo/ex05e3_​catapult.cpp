#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1005;

vector<int> graph[MAX_N];
bool visited[MAX_N];
bool reach[MAX_N][MAX_N]; 
int parent[MAX_N], sz[MAX_N];
int n;

int _findp(int u) {
    if (u== parent[u]) return u;
    return parent[u] = _findp(parent[u]);
}

void dfs(int u, int x) {
    if (visited[u] == true) return;
    visited[u] = true;
    reach[u][x] = true; // house[x] reach house[u]
    for (auto &node: graph[u]) dfs(node, x);
}

int main()
{
    cin.tie(0)->sync_with_stdio(NULL);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        while (m--)
        {
            int x;
            cin >> x;
            graph[i].push_back(x); // house [i] can send gift to house[x]
        }
    }

    for (int i=0; i < n; ++i) {
        fill(visited, visited+n, false);
        dfs(i, i);
    }

    iota(parent, parent + n, 0);
    fill(sz, sz + n, 1);
    for (int i=0; i < n; ++i) {
        for (int j=i+1; j < n; ++j) {
            // need return after sending the gift
            if (reach[i][j] ==true && reach[j][i] == true) {
                int u = _findp(i), v=_findp(j);
                if (u != v) {
                    parent[v] = u;
                    sz[u] += sz[v];
                }
            }
        }
    }

    vector<int> res;
    // we will collect the size for it
    // parent head will be determine from _findp function
    for (int i=0; i <n; ++i) {
        if (parent[i] == i) res.push_back(sz[i]);
    }

    sort(res.begin(), res.end());
    for (auto ans: res) cout << ans << ' ';

    return 0;
}