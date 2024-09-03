#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> keeper(n);

    for(int i=0 ; i < n ; ++i) {
        cin >> keeper[i];
    }

    sort(keeper.begin(), keeper.end());

    int input;
    while(m--) {
        cin >> input;
        int bound_left = input - k;
        int bound_right = input + k;

        vector<int>::iterator it1, it2;
        it1 = lower_bound(keeper.begin(), keeper.end(), bound_left);
        it2 = upper_bound(keeper.begin(), keeper.end(), bound_right);
        int dis = it2 - it1;

        cout << dis << ' ';
    }
    
    return 0;
}