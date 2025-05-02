#include <bits/stdc++.h>
using namespace std;

struct edge {
    int a, b, w;
};

vector<edge> e;
int dist[105];

int main() {
    int n, m, s;
    cin >> n >> m >> s;
    
    while(m--) {
        int a,b,c;
        cin >> a >> b >> c;
        e.push_back({a,b,c});
    }

    for (int i=0; i < n; ++i) dist[i] = INT_MAX;

    dist[s] = 0;
    for (int i=0; i < n-1; ++i) {
        for (auto &x: e) {
            int a=x.a, b=x.b, w=x.w;
            dist[b] = min(dist[b], dist[a] + w);
        }
    }

    for (auto &x: e) {
        int a=x.a, b=x.b, w=x.w;
        if(dist[b] > dist[a] + w) {
            cout << "-1";
            return 0;
        }
    }

    for (int i=0; i < n; ++i)
        cout << dist[i] << " ";


    return 0;
}