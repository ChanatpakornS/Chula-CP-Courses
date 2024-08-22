#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> intersect(vector<int> &v1, vector<int> &v2) {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int i = 0, j=0;

    vector<int> res;

    int prev = 5050;

    while(i < v1.size() && j < v2.size()) {
        if ((v1[i] != prev) && v1[i] == v2[j]) {
            res.push_back(v1[i]);
            prev = v1[i];
            i++;
            j++;
        } else {
            if (v1[i] > v2[j]) j++;
            else i++;
        }
    }

    return res;
}

int main() {
    
    int n,m;

    cin >> n >> m;

    vector<int> v1(n), v2(m);
    
    for(int i=0 ; i < n ; ++i) cin >> v1[i];
    for(int i=0 ; i < m ; ++i) cin >> v2[i];

    vector<int> res = intersect(v1,v2);

    for(auto &i : res) cout << i << " ";

    return 0;
}