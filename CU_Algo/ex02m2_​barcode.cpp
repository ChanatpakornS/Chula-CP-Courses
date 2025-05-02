#include <iostream>

using namespace std;

//lines, appended stripe
int dp[35][35];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    //init thickness of first black
    for (int i=1;i <= m; ++i) dp[i][1] = 1;

    //start generating
    for (int i=1; i < n; ++i)
        for (int j=0; j < k; ++j) 
            for (int th=1; th <= m; ++th)
                dp[i+th][j+1] += dp[i][j];
    
    cout << dp[n][k] << endl;

    return 0;
}