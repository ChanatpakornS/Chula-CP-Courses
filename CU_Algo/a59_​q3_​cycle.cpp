#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005];
queue<int> q;
int deg[100005];
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }

    //find the root node
    for (int i=0;i < n; ++i)
        if (deg[i] == 1)
            q.push(i);

    int k;
    while (!q.empty()) {
        k = q.front(); q.pop();
        n--;
        for(int i=0; i < v[k].size();i++) {
            deg[v[k][i]]--;
            if(deg[v[k][i]] == 1)
                q.push(v[k][i]);
        }
    }

    cout << n;
    return 0;
}