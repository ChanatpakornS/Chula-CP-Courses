#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> keep;

    int start, stop;
    cin >> start >> stop;
    keep[stop] = start;
    cout << "1" << " ";

    for (int i=2 ;i <=n ; ++i) {
        int start, stop;
        cin >> start >> stop;
        auto it = keep.lower(stop);

        cout << "(" <<  it->first << " " << it->second << ")\n";
        if (it->first > stop && --it->second < start) {
            cout << i << " ";
            keep[stop] = start;
        }
    }

    return 0;
}