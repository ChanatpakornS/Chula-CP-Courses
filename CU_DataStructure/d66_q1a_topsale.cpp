#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<pair<int, int>, greater<pair<int, int>>> s;
    map<int, int> m;

    int n, ma;
    cin >> n >> ma;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert({0, a});
        m[a];
    }

    for (int i = 0; i < ma; i++)
    {
        int b;
        cin >> b;
        if (b == 1)
        {
            int am, id;
            cin >> id >> am;
            if (m.count(id))
            {
                s.erase({m[id], id});
                m[id] += am;
                s.insert({m[id], id});
            }
        }
        else if (b == 2)
        {
            int k;
            cin >> k;
            // cout << "\n-------\n";
            // for (auto &x : s)
            //     cout << x.first << ' ' << x.second << '\n';
            // cout << "-------\n";
            auto it = s.lower_bound({k, 0});
            // cout << "this is : " << it->first << ' ' << it->second << '\n';
            if (it == s.end() || it->first == 0)
                cout << "NONE\n";
            else
                cout << it->second << '\n';
        }
    }
}