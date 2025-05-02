#include <bits/stdc++.h>
using namespace std;

int dye[7] = {-1, -1, 1, 1, 0, 0};
int dxe[7] = {-1, 0, -1, 0, -1, 1};

int dyo[7] = {-1, -1, 1, 1, 0, 0};
int dxo[7] = {0, 1, 0, 1, -1, 1};

int r, c;
int a1, a2, b1, b2;

int mp[305][305];
int dist[305][305];

priority_queue<pair<int, pair<int, int>>> pq;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin >> r >> c >> a1 >> b1 >> a2 >> b2;

    for (int i = 1; i <= r; ++i)
    {
        for (int j = 1; j <= c; ++j)
        {
            cin >> mp[i][j];
            dist[i][j] = INT_MAX;
        }
    }

    pq.push({-mp[a1][b1], {b1, a1}});
    dist[a1][b1] = mp[a1][b1];

    while (!pq.empty())
    {
        auto t = pq.top();
        pq.pop();

        int x = t.second.first;
        int y = t.second.second;

        for (int i = 0; i < 6; ++i)
        {
            int ny, nx;
            if (y % 2)
            {
                ny = y + dyo[i];
                nx = x + dxo[i];
            }
            else
            {
                ny = y + dye[i];
                nx = x + dxe[i];
            }

            if (ny <= 0 || nx <= 0 || nx > c || ny > r)
                continue;

            if (dist[ny][nx] > dist[y][x] + mp[ny][nx])
            {
                dist[ny][nx] = dist[y][x] + mp[ny][nx];
                pq.push({-dist[ny][nx], {nx, ny}});
            }
        }
    }

    cout << dist[a2][b2];
}