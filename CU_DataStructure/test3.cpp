#include <iostream>
#include <set>
#include <vector>

using namespace std;

int solve(vector<string> const &key, vector<string> const &user)
{
    int score = 0;
    int nk = key.size();
    for (int i = nk - 1; i >= 0; i--)
    {
        bool tres = true;
        if (key[i] == "_")
        {
            while (key[i] == "_")
            {
                tres = tres && (key[i] == user[i]);
                i--;
                if (i < 0)
                    return score;
            }
            score += tres && (key[i] == user[i]);
        }
        else
        {
            score += (key[i] == user[i]);
        }
    }

return score;
}

int main()
{
    vector<string> key = {"D", "_", "A", "_", "W", "_", "_", "S", "_"};
    vector<string> user = {"D", "_", "_", "_", "W", "_", " ", "S", "_"};

    cout << solve(key, user) << endl;
}