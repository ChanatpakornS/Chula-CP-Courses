#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main() {
    int n,m;
    cin >> n >> m;
    for (int i=0;i < m;++i) cin >> a[i];
    sort(a, a+m);
    int sum = 0, i = 0;
    double res = 0;
    while(i < m%n) sum += a[i++];
    res = sum;
    while(i < m) {
        sum += a[i++];
        if((i%n) == (m%n)) res += sum;
    }

    printf("%.3f", res/m);

    return 0;
}