#include <bits/stdc++.h>
using namespace std;

int head[100004];

int getHead(int x) {
    if (head[x] == x) return x;
    return head[x] = getHead(head[x]);
}

int main() {
    int v, e;
    cin >> v >> e;
    vector<int> edge[e];

    for (int i=0; i < v; ++i) 
        head[i] = i;

    while(e--) {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    
    
    
}