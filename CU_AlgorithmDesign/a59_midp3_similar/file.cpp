#include <bits/stdc++.h>
using namespace std;

string a, b;

bool solve(const string &a, const string &b)
{
    int n = a.size();
    if (n == 1)
        return a == b;
    if (a == b)
        return true;

    int m = n >> 1;
    return (solve(a.substr(0, m), b.substr(0, m)) && solve(a.substr(m, m), b.substr(m, m))) || (solve(a.substr(0, m), b.substr(m, m)) && solve(a.substr(m, m), b.substr(0, m)));
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> a >> b;
    string res = (solve(a, b)) ? "YES\n" : "NO\n";
    cout << res;
    return 0;
}