#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    int N, M;
    cin >> N >> M;
    
    map<int,int> keeper;

    for (int i=0 ; i < N ; ++i) {
        int a, b;
        cin >> a, b;
        keeper[b] = min(a,keeper[b]);
    }

    for (auto &i : keeper) cout << i.first << i.second <<endl;

    return 0;
}