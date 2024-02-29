#include <iostream>
#include <algorithm>

using namespace std;

long long mod(int x, int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int c = mod(x, n / 2, k);
        if (n % 2)
        {
            return (c * c * x) % k;
        }
        else
        {
            return (c * c) % k;
        }
    }
}

int main()
{
    long long x, n, k;
    cin >> x >> n >> k;
    cout << mod(x, n, k);
}