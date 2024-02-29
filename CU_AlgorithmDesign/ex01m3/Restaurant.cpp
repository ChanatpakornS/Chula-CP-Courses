#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a;
    cin >> n >> a;
    vector<int> chef(n);
    for (int i = 0; i < n; ++i)
        cin >> chef[i];

    ll cus;
    while (a--) {
        ll start = 0;
        ll stop = 1e16;
        cin >> cus;
        while (start < stop) {
            ll m = (start + stop)/2;
            ll c = n;
            for (int i=0 ; i<n ; ++i) c += m/(chef[i]);
            (cus <= c) ? stop = m : start = m + 1 ;
        }

        cout << stop << '\n';
    }
}