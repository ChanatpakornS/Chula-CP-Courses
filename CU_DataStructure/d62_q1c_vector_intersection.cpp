#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N,M;

    cin >> M >> N;

    vector<int> v1(M), v2(N);
    vector<int> v3(0);
    
    for (int i=0 ; i < M ; ++i) cin >> v1[i];
    for (int i=0 ; i < N ; ++i) cin >> v2[i];
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    set_intersection(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        back_inserter(v3)
    );

    set<int> uset;
    for (auto &i : v3) uset.insert(i);
    
    for (auto &i : uset) cout << i << " ";

    return 0;
}