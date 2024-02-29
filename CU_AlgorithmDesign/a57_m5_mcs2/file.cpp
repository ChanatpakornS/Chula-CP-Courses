#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define ll long long

using namespace std;

int main() {
    int n, c, m, tmp;
    cin >> n;
    vector<int> vec(n);
    for (int i=0 ; i < n; ++i) {
        cin >> vec[i];
    }
    int sum = accumulate(vec.begin(), vec.end(), 0);
    c = tmp = m = vec[0];
    for (int i=1 ; i < n ; ++i) {
        c = min(c + vec[i], vec[i]);
        m = min(c, m);
        tmp = max(vec[i], tmp);
    }

    cout << max(max(sum , sum == m ? m :sum - m) , tmp);
}