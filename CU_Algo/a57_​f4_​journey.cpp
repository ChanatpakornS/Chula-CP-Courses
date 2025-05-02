#include <bits/stdc++.h>
#define INF 1e9+7

using namespace std;

int n, hp[25][25], dp[1<<21][25]={};

int dfs(int mask, int last) {
    if (mask == (1 << n)-1) { //check if the bitmask is all 011111..11 that mean it's all visited
        if (last == n-1) return 0; //check if prev is last town
        else return -INF;
    }

    if (dp[mask][last] != 0) return dp[mask][last];
    dp[mask][last] = -INF;
    for (int i=0; i<n; ++i)
        if (!(mask & (1<<i))) dp[mask][last] = max(dp[mask][last], hp[last][i] + dfs(mask | (1 << i), i));
    
    return dp[mask][last];
}

int main() {
    cin >> n;
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            cin >> hp[i][j];

    cout << dfs(1, 0); // visit first town ...0001 with prev is 0
}