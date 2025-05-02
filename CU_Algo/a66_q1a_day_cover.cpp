#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int solve(int tot_mem, int curr_mem, vector<int> day_work, int min_mem, vector<vector<int>> &free)
{
    if (curr_mem >= tot_mem)
        return 21;

    bool end = true;

    int m1 = solve(tot_mem, curr_mem + 1, day_work, min_mem, free);

    for (auto &wd : free[curr_mem])
    {
        day_work[wd - 1] = 1;
    }

    for (auto &it : day_work)
    {
        if (it == 0)
            end = false;
    }
    if (end)
        return min_mem + 1;

    int m2 = solve(tot_mem, curr_mem + 1, day_work, min_mem + 1, free);

    return min(m1, m2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> free;

    for (int i = 0; i < m; ++i)
    {
        int free_days;
        int d;
        cin >> free_days;
        vector<int> tmp(free_days);

        for (int i = 0; i < free_days; ++i)
        {
            cin >> tmp[i];
        }

        free.push_back(tmp);
    }

    cout << solve(m, 0, vector<int>(n, 0), 0, free);

    return 0;
}