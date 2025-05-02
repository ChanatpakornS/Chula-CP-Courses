#include <bits/stdc++.h>
using namespace std;

int dist[105][105];
char mp[105][105];
int r, c;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void dfs(int x, int y) {
    for (int i=0; i<4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx <= 0 || ny <= 0 || nx > c|| ny > r) continue;
        if (mp[ny][nx] == '#') continue;

        if (dist[ny][nx] > dist[y][x] + 1) {
            dist[ny][nx] = dist[y][x] + 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> r >> c;
    for (int i=1;i <=r; ++i) 
        for (int j=1 ; j <= c; ++j)
            cin >> mp[i][j];

    for (int i=1; i<=r; ++i) for (int j=1; j<=c;++j) dist[i][j] = INT_MAX;
    dist[1][1] = 0;
    dfs(1, 1); //x, y
    
    cout << ( dist[r][c] == 1e9 ? -1 : dist[r][c]);

    return 0;
}