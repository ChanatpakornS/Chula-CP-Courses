#include <bits/stdc++.h>

using namespace std;

bool solve(int virus[], int start, int stop) {
    if(stop - start == 2) return true;

    int mid = start + stop >> 1;
    int a = 0;
    for (int x=start; x < mid; ++x)
        if(virus[x]) ++a;

    int b = 0;
    for (int x=mid; x < stop; ++x)
        if(virus[x]) ++b;

    return (abs(a-b) <= 1) && (solve(virus, start, mid)) && solve(virus, mid, stop);
}

int main() {
    int n, k; cin >> n >> k;
    int l = 1 << k;
    int virus[l];

    for (int i=0 ; i < n ; ++i) {
        for(int j=0 ; j < l; ++j) cin >> virus[j];
        cout << (solve(virus, 0, l) ? "yes\n" : "no\n");
    }

    return 0;
}