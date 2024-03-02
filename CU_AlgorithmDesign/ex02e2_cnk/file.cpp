#include <bits/stdc++.h>
using namespace std;

// int solve(int n , int k) {
//     if (n == k || n == 0 || k == 0) {
//         return 1;
//     } else {
//         return solve(n-1, k-1) + solve(n-1, k);
//     }
// }

int main() {
    int n,k ;
    cin >> n >> k;
    int c[31][31];
    for (int i=0 ; i <= n; ++i) {
        for (int j=0 ; j <= i ; ++j) {
            if (j == 0 || i == j) c[i][j] = 1;
            else c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    cout << c[n][k];
}