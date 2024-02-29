#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void result(int x, int y, string ans, int mem, int bar)
{
    if (mem < x)
    {
        result(x, y, ans + to_string(0), mem + 1, bar);
        result(x, y, ans + to_string(1), mem + 1, bar + 1);
    }
    else
    {
        if (bar == y)
        {
            // cout << "------" << cons << "-------\n";
            cout << ans << "\n";
        }
        return;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    result(y, x, "", 0, 0);
}