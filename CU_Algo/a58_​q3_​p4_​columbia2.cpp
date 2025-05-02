#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9 + 7;
const int d[5][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}, {0, 0}};
int r, c;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> r >> c;

    vector<vector<int>> a(r + 1, vector<int>(c + 1));
    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            cin >> a[i][j];

    vector<vector<vector<int>>> dist(r + 5, vector<vector<int>>(c + 5, vector<int>(3, INF)));
    vector<vector<vector<bool>>> visited(r + 5, vector<vector<bool>>(c + 5, vector<bool>(3)));

    priority_queue<tuple<int,int,int,int >> pq; 
    pq.emplace(0, 1, 1, 0);
    dist[1][1][0] = 0; //start from (left corner) of the columbia (0 tp) with (0) cost
    while(!pq.empty()) {
        auto [di, ux, uy, k] = pq.top();
        pq.pop();

        if (visited[ux][uy][k] == true) continue;
        visited[ux][uy][k] = true;

        for (int i=0; i<4; ++i) {
            int vx = ux + d[i][0], vy = uy + d[i][1];
            if (vx < 1 || vx > r || vy < 1 || vy > c) continue;
            if (visited[vx][vy][k] == false and dist[ux][uy][k] + a[vx][vy] < dist[vx][vy][k]) {
                dist[vx][vy][k] = dist[ux][uy][k] + a[vx][vy];
                pq.emplace(-dist[vx][vy][k], vx, vy, k);
            }
            if (k + 1 < 3) {
                for (int j=0; j < 5; ++j) {
                    int vx2 = vx + d[j][0], vy2 = vy + d[j][1];
                    if (vx2 < 1 || vx2 > r || vy < 1 || vy > c) continue;
                    if (visited[vx2][vy2][k + 1] == false && dist[ux][uy][k] < dist[vx2][vy2][k+1]) {
                        dist[vx2][vy2][k + 1] = dist[ux][uy][k];
                        pq.emplace(-dist[vx2][vy2][k+1], vx2, vy2, k+1);
                    }
                }
            }
        }
    }

    for (int i=1; i <= r; ++i) {
        for (int j=1; j <= c; ++j) cout << min({dist[i][j][0], dist[i][j][1], dist[i][j][2]}) << ' ';
        cout << '\n';
    }

    return 0;
}