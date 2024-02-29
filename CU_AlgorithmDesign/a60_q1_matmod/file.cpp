#include <iostream>
#include <vector>

using namespace std;

vector<int> m(const vector<int> &m, const vector<int> &n, int mod)
{
    vector<int> result = {(m[0] * n[0] + m[1] * n[2]) % mod, (m[0] * n[1] + m[1] * n[3]) % mod,
                          (m[2] * n[0] + m[3] * n[2]) % mod, (m[2] * n[1] + m[3] * n[3]) % mod};
    return result;
}

vector<int> recur(vector<int> &vec, int n, int k)
{
    if (n == 0)
        return {1, 0, 0, 1};
    else
    {
        if (n % 2 == 0)
        {
            vector<int> vr = recur(vec, n / 2, k);
            return m(vr, vr, k);
        }
        else
        {
            return m(recur(vec, n - 1, k), vec, k);
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> matrix(4);
    for (int i = 0; i < 4; i++)
        cin >> matrix[i];
    vector<int> out(4);
    out = recur(matrix, n, k);
    for (auto &i : out)
    {
        cout << i << " ";
    }
}