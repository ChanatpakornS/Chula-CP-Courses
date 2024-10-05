#include <iostream>
#include <vector>

using namespace std;

void attack(vector<char> &power, string input)
{
    int n = power.size();
    int e = input.size();
    vector<char> res;
    string state = "";
    for (int i = 0; i < n; i++)
    {
        res.push_back(power[i]);
        if (input[state.size()] != power[i])
        {
            cout << "claer" << endl;
            state = "";
            continue;
        }

        state += power[i];
        if (state == input)
        {
            res.erase(res.end() - e, res.end());
            // state = "";
        }
    }

    power = res;
}

int main()
{
    vector<char> power = {'I', 'a', 'm', 'S', 'a', 'm'};
    string input = "sa";

    attack(power, input);

    for (auto &x : power)
    {
        cout << x << " ";
    }
}