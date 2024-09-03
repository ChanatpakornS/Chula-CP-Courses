#include <iostream>
#include <set>

using namespace std;

int main() {

    int N;
    cin >> N;

    set<int> p1,p2;

    for (int i=1 ; i <= N ; ++i) {
        p1.insert(i);
        int inp;
        cin >> inp;
        p2.insert(inp);
    }

    string res = (p1 == p2) ? "YES" : "NO";
    cout << res;

    return 0;
}