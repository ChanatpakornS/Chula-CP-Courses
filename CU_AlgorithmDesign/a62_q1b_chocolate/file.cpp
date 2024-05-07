#include <bits/stdc++.h>
using namespace std;

int s[10];
int n, k;
int dp[10005];
    
int main()
{
    cin >> n >> k;
    for (int i = 0; i < k; ++i)
        cin >> s[i];
  
    dp[0] = 1;
    for (int i=1; i <= n; ++i) {
        for (int j=0 ; j < k; ++j) {
            if(i - s[j] >= 0 ) dp[i] = (dp[i] +  dp[i-s[j]])%1000003
        }
    }

    cout << dp[n];
}