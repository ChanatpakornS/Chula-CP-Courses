#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(vector<vector<int>> table, int posx, int posy, string path)
{
    if (posx == table.size() - 1 && posy == table[0].size() - 1)
    {
        cout << path << '\n';
    }

    table[posx][posy] = 1;

    if (posy + 1 < table[0].size() && !table[posx][posy + 1])
    {
        solve(table, posx, posy + 1, path + 'A');
    }
    if (posx + 1 < table.size() && !table[posx + 1][posy])
    {
        solve(table, posx + 1, posy, path + 'B');
    }
    if (posx - 1 >= 0 && !table[posx - 1][posy])
    {
        solve(table, posx - 1, posy, path + 'C');
    }
}

int main()
{
    int R, C;
    cin >> R >> C;

    vector<vector<int>> table(R, vector<int>(C));
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> table[i][j];
        }
    }

    solve(table, 0, 0, "");
    cout << "DONE\n";

    return 0;
}