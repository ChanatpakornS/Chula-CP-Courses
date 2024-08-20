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

    long long aa, ab;

    map<long long, long long> relations;

    for (int i=0 ; i < n ; ++i) {
        cin >> f >> s;
        relations[s] = f;
    }

    while(m--) {
        cin >> aa >> ab;
        if (aa != ab && (relations[relations[aa]] != 0 || relations[relations[ab]] != 0)) {
            if (relations[relations[aa]] == relations[relations[ab]]) cout << "YES\n"; 
            else cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}