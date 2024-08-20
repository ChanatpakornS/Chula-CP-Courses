#include <iostream>
#include <vector>

using namespace std;

bool sum[2000005];

int main() {
    int N,M;
    
    cin >> N >> M;
    vector<int> tmp;
    int x;
    
    for (int i=0 ; i < N; ++i) {
        cin >> x;
        tmp.push_back(x);
        for (int j=0 ; j < tmp.size()-1 ; ++j) {
            // cout << x << tmp[j] <<endl;
            sum[x + tmp[j]] = true;
        }
    }

    while(M--) {
        cin >> x;
        if (sum[x]) {
            cout <<"YES\n";
        } else cout << "NO\n";
    }

    return 0;
}