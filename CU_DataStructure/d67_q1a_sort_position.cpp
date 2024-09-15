#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> keeper(n), tmp;

    for (int i =0 ; i < n ; ++i) {
        int x;
        cin >> x;
        keeper[i] = {x, i};
    }

    tmp = keeper;

    sort(keeper.begin(), keeper.end());
    
    vector<int> idx_re(n);
    for(int i=0 ; i < keeper.size() ; ++i) {
        idx_re[keeper[i].second] = i + 1; 
    }

    for(int j=0 ; j < tmp.size() ; ++j) {
        cout << idx_re[j] << " "; 
    }


}