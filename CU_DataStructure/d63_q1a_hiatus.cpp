#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n,m;
    cin >> n >> m;

    vector<int> time(n);
    
    for(int i=0 ; i <n ; ++i) {
        int a,b ;
        cin >> a >> b;
        time[i] = a * 100 + b;
    }

    sort(time.begin(), time.end());

    while(m--) {
        int a,b,cal ;
        cin >> a >> b;
        cal = a * 100 + b;
        if (cal < time[0]) {
            cout << -1 << " " << -1 << " ";
        } else {
            auto it = lower_bound(time.begin(), time.end(), cal);
            int year = *it / 100;
            int month = *it % 100;
            if (year == a && month == b) {
                cout << 0 << " " << 0 << " ";
            } else {
                it--;
                cout << *it / 100 << " " << *it % 100 << " ";
            }
        }
    }

    return 0;
}
