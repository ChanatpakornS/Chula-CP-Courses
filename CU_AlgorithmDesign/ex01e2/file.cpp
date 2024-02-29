#include <iostream>

using namespace std;

int main() {
    int n, a, c, m;
    cin >> n >> a;
    c = m = a;
    for (int i=1 ; i < n ; ++i) {
        cin >> a;
        c = max(c + a, a);
        m = max(c, m);
    }

    cout << m;
}