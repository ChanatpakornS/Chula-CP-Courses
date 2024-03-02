#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    int f1 = 1;
    int f2 = 1;
    int f = 1;
    for (int i = 2 ; i < n ; ++i) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}