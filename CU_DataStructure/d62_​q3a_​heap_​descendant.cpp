#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a;
    string res = "";
    int cnt = 0;
    cin >> n >> a;
    int l = a, r = a;
    while( l < n) {
        r = (n-1 < r) ? n-1 : r;
        for(int i=l ; i <= r; ++i) {
           res += to_string(i) + " ";
            cnt++;
        }
        l = 2*l + 1;
        r = 2*r + 2;
    }
    cout << cnt << '\n';
    cout << res;
}