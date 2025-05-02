#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    vector<int> data;
    for (int i=0;i <n; ++i) {
        int x;
        cin >> x;
        data.push_back(x);
    }
    sort(data.begin(), data.end());
    int hit = -1, used = 0;
    for (int hole: data) {
        if(hit >= hole) continue;
        hit = hole + l - 1;
        ++used;
    }

    cout << used;
    return 0;
}