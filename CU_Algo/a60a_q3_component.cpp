#include <bits/stdc++.h>
using namespace std;

int getHead(vector<int> &comp, int x) {
    if (comp[x] == x) return x;
    return comp[x] = getHead(comp, comp[x]);
}

int main() {
    int v, e;
    cin >> v >> e;
    int res = v;

    vector<int> component(v + 1);
    for (int i=1; i<=v; ++i) component[i] = i;
    while(e--) {
        int a,b;
        cin >> a >> b;
        if (getHead(component, a) != getHead(component, b)) {
            component[getHead(component, b)] = getHead(component, a);
            --res;
        }
    }

    cout << res;

    return 0;
}