#include <bits/stdc++.h>
using namespace std;

int n;
int F[55][55]; //relationship
int B[55]; //power

void solve() {
    
}

int main() {
    cin >> n;
    for (int i=1;i <= n;++i) cin >> B[i];
    for (int i=1;i <= n;++i) 
        for (int j=1; j<=n; ++j)
            cin >> F[i][j];

    solve(1); //start from 1st person

    return 0;
}