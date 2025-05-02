#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> order(m), time(m);
    vector<pair<int,int>> portals(n);
    for(auto &x : order) cin >> x;
    for(auto &x : time) cin >> x; //i --> i+1
    for(auto &x : portals) cin >> x.first >> x.second;

    

    return 0;
}