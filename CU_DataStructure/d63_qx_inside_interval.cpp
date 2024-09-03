#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m;
    cin >> n >> m;

    map<int,int> intervals;

    while(n--) {
        int a,b;
        cin >> a >> b;
        if(intervals[b] != 0) intervals[b] = min(intervals[b], a);
        else intervals[b] = a;
    }

    while(m--) {
        int p;
        cin >> p;
        auto it = intervals.lower_bound(p);
        // cout << "p is " << p << endl;
        // cout << it->first << " " << it->second << endl;
        if(it == intervals.end()) {
            cout << 0 << " ";
            continue;
        } else {
            if(it->second <= p) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
    }

    return 0;
}