#include <iostream>

using namespace std;

int x, n, k;

int main()
{
    int tot;
    cin >> x >> n >> k;
    tot = x ? 1 : 0;
    while(x && n--) {
        tot *= x;
        if (tot >= k) tot -= k;
    }

    cout << tot;
}