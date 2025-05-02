#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2005;
const int INF = 1e9 + 7;

int co[MAX_N], ci[MAX_N];
int n,m;
vector<int> graph[MAX_N];
int dist[MAX_N];
bool visited[MAX_N];

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    cin >> n >> m;
    for (int i=0;i < n; ++i) cin >> ci[i];   
    for (int i=0;i < n; ++i) cin >> co[i];   
    while(m--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b); // from a --> b
    }
    for (int i = 0; i < n; i++) dist[i] = INF;

    //dist-value, node
    priority_queue<pair<int,int>> pq;
    pq.emplace(0,0); // start with 0,0
    dist[0] = 0;

    //dijkstra algorithm using pq
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u] == true) continue;
        visited[u] = true;

        for (auto v : graph[u]) {
            if (visited[v] == false && dist[u] + co[u] + ci[v] < dist[v]) {
                dist[v] = dist[u] + co[u] + ci[v];
                pq.emplace(-dist[v], v);
            }
        }
    }

    for (int i=0; i<n; ++i) {
        if (dist[i] == INF) dist[i] = -1;
        cout << dist[i] << ' ';
    }

    return 0;
}