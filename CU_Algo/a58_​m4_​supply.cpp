#include <bits/stdc++.h>
using namespace std;

vector<pair<bool, int>> d(200005);

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    queue<int> q;
    queue<int> stock;
    for (int i = 1; i <= k; ++i)
    {
        int day, label;
        bool event;
        cin >> day >> event >> label;
        d[day] = {event, label};
    }
    for (int i = 1; i <= k; ++i)
    {
        bool event = d[i].first; // 0 = A, 1 = B
        int label = d[i].second;
        if (event)
        { // B
            if (!stock.empty())
            {
                cout << stock.front() << '\n';
                stock.pop();
            }
            else
            {
                cout << "0\n";
                q.push(label);
            }
        }
        else
        { // A
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
            {
                cout << "0\n";
                stock.push(label);
            }
        }
    }
    return 0;
}
