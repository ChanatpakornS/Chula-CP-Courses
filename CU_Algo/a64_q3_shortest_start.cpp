#include <bits/stdc++.h>
using namespace std;

int n, m, k, v;
vector<pair<int,int>> edge[5005]; 
vector<int> starts;
priority_queue<pair<int,int>> pq;
int dist[5005];

int main() {
    cin >> n >> m >> k >> v;
    while (k--) {
        int tmp;
        cin >> tmp;
        starts.push_back(tmp);
    }

    while(m--) {
        int a, b, w;
        cin >> a >> b >> w;
        edge[b].push_back({a, w}); //prev, weight
    }

    for (int i=0;i < n; ++i) dist[i] = INT_MAX;

    pq.push({0 ,v});
    dist[v] = 0;
    while(!pq.empty()) {
        int x = pq.top().second; //loc
        pq.pop();

        for(auto &ele: edge[x]) {
            int y = ele.first, w = ele.second;
            if (dist[y] > dist[x] + w) {
                dist[y] = dist[x] + w;
                pq.push({-dist[y], y});
            }
        }
    }

    int res = INT_MAX;
    for (auto start: starts) {
        res = min(res, dist[start]);
    }

    cout << res;

    return 0;
}