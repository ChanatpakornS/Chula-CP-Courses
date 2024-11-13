#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, idx;
    cin >> n >> idx;
    int count = 0;
    string res = "";
    int l = 2*idx + 1, r=2*idx + 2, i = 0;
    while(i < n) {
        if (i != l && i != idx) {
            res += to_string(i) + " ";
            count++;
        }
        if (i == l) {
            i = r;
            l = 2*l + 1;
            r = 2*r + 2;
        }
        i++;
    }

    cout << count << '\n';
    cout << res;
    return 0;
}