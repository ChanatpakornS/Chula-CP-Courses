#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void result(int x, int y, string ans, int cons, int mem, int mx)
{
    if (mem < x)
    {
        result(x, y, ans + to_string(0), 0, mem + 1, max(mx, cons));
        result(x, y, ans + to_string(1), cons + 1, mem + 1, mx);
    }
    else
    {
        if (max(mx, cons) >= y)
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
    result(x, y, "", 0, 0, false);
}