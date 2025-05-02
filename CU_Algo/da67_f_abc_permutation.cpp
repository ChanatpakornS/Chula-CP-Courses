#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<string> res;

void solve(int n, int a, int b, int c, string tmp) {
    if (tmp.size() >= n) {
        res.push_back(tmp);
        return;
    }
    
    if (a >= 1) solve(n, a-1, b, c, tmp + 'A');
    if (b >= 1) solve(n, a, b-1, c, tmp + 'B');
    if (c >= 1) solve(n, a, b, c-1, tmp + 'C');
}

int main() {
    //let A:0 , B:1, C:2
    int kp[3] = {0, 0, 0};
    int N;

    cin >> N >> kp[0] >> kp[1] >> kp[2];

    string tmp;

    solve(N, kp[0], kp[1], kp[2] , tmp);

    cout << res.size() << '\n';
    for (auto &ele : res) {
        cout << ele << '\n';
    }

  return 0;
}