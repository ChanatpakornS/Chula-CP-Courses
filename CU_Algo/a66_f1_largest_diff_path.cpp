#include <bits/stdc++.h>
using namespace std;

int val[2005];
int res = INT_MIN;
vector<int> edge[2005];
int max_val[2005];

int dfs(int u, int min_val) {
    if (max_val[u] != -1) return max_val[u];
    max_val[u] = val[u];
    min_val = min(min_val, val[u]);
    for (int v: edge[u])
        max_val[u] = max(max_val[u], dfs(v, min_val));
    
    res = max(res, max_val[u] - min_val);
    return max_val[u];
}

int main(){
    int v, e;
    int i;
    cin >> v >> e;
    for (i=0; i < v;++i) {
        cin >> val[i];
        max_val[i] = -1;
    }

    for (i=0; i < e; ++i) {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
    }

    for (i=0; i < v; ++i) 
        if (max_val[i] == -1)
            dfs(i, val[i]);
    
    cout << res;
    return 0;
}