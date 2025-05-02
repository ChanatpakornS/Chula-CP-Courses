#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    for (int i=0; i <n ; ++i) cin >> vec[i];
    
    while(m--) {
        int cmp;
        int i = 0, res = 0;
        cin >> cmp;
        while(cmp != vec[i]) {
            if(vec[i++] > cmp) ++res;
        }

        cout << res << '\n';
    }

    return 0;
}