#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    int n, k;
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> m;
    int l, r;
    while(m--) {
        cin >> n >> k;
        int mData[n];   
        l = 0;
        r = 0;
        for(int i=0 ; i < n; i++) {
            cin >> mData[i];
        }
        bool con = true;
        while(con && l < n) {
            l = k*l + 1;
            r = k*r + k;
            r = (n-1 < r) ? n-1 : r;
            for(int i=l; i <= r ;++i) {
                if(i < n && mData[i] > mData[(i-1)/k]) {
                    con = false;
                    break;
                }
            }
        }
        if(con) cout << "true\n";
        else cout << "false\n";
    }
}