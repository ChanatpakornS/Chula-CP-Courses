#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n,m;

    cin >> n >> m;

    long long f,s;

    long long asked_a, asked_b;

    map<long long, long long> relations;

    for (int i=0 ;i < n ; ++i) {
        cin >> f >> s;
        relations[s] = f ;// s : f
        if(relations.find(f) == relations.end()) relations[f] = -1;
    }

    while (m--) {
        cin >> asked_a >> asked_b;
        if (asked_a != asked_b && relations[relations[asked_a]] == relations[relations[asked_b]] ) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}