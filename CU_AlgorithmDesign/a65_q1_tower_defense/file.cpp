#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int n, m, k, w;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k >> w;
    vector<int> monster(m);
    vector<int> monsterPower(m);
    vector<int> board_t(k);

    for (int i = 0; i < m; ++i)
    {
        int a;
        cin >> a;
        monster[i] = a; // location of the monster
    }

    for (int i = 0; i < m; ++i)
    {
        int a;
        cin >> a;
        monsterPower[i] = a; // pow of monster
    }

    for (int i = 0; i < k; ++i)
    {
        int a;
        cin >> a;
        board_t[i] = a; // turret location
    }

    for (int i = 0; i < m; ++i)
    {
        for (auto &j : board_t)
        {
            if (monsterPower[i] && j && (j + w >= monster[i] && j - w <= monster[i]))
            {
                monsterPower[i]--;
                j = 0;
            }
            else
            {
                continue;
            }
        }
    }

    cout << accumulate(monsterPower.begin(), monsterPower.end(), 0);

    return 0;
}