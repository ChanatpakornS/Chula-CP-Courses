#include <bits/stdc++.h>
using namespace std;

int r, c, t;
int mp[505][505];
int v[505][505];

int dx[5] = {0, 0, 1, -1};
int dy[5] = {1, -1, 0, 0};
int pandemic = 0;

int main()
{
    cin >> r >> c >> t;
    queue<pair<int, pair<int,int>>> q;
    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
        {
            cin >> mp[i][j];
            if (mp[i][j] == 1) {
                q.push({0, {j, i}}); //time, x, y
            }
        }
    
    while(!q.empty()) {
        auto p = q.front();
        q.pop();

        if (p.first > t) continue;

        int x = p.second.first;
        int y = p.second.second;
        if (v[y][x]) continue;

        v[y][x] = 1;
        pandemic++;

        for (int i=0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx <= 0 || ny <= 0 || nx > c || ny > r) continue;
            if(mp[ny][nx] == 2) continue;

            q.push({p.first + 1, {nx, ny}});
        }
    }

    cout << pandemic;

    return 0;
}