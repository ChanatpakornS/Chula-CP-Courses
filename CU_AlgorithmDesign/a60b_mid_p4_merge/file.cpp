#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v,int start, int stop, int &count) {
    if (count == 0 || start == stop - 1) {
        return;
    } else {
        int m = (start + stop) >> 1;
        if (count > 0) {swap(v[m], v[m-1]);count--;}
        cout << "DO" << count << "\n"; 
        solve(v, m, stop, count);
        solve(v, start, m, count);
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    if (k > (n << 1) - 1 || k % 2 == 0) {cout << -1;}
    else {
        vector<int> num(n);
        for (int i=0 ; i<n ; ++i) num[i] = i+1;
        int count = (k-1) >> 1;
        solve(num, 0, n, count);
        for(auto &i : num) cout << i << " ";
    }
}