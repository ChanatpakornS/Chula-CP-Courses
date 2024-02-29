#include <iostream>
#include <algorithm>
using namespace std;

bool check(int arr[], int start, int stop, bool more) {
    if (stop - start > 2) more = true;
    if (stop - start == 1 && more) return (arr[start] == 0 && arr[stop] == 1) || (arr[start] == 1 && arr[stop] == 0);
    if (stop - start == 1) return (arr[start] == 0 && arr[stop] == 1);
    int m = (start + stop) /2;
    int rb = 0, lb = 0;
    for (int i=start ; i <= m ; ++i) {
        rb += arr[i];
    }
    for (int i=m+1 ; i <= stop ; ++i) {
        lb += arr[i];
    }
    if (abs(rb - lb) <= 1) return check(arr, start, m, more) && check(arr, m + 1, stop, more);    
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int p = 1 << k;
    int arr[p];
    for (int i=0 ; i < n ; ++i) {
        for (int j =0 ; j < p ; ++j) {
            cin >> arr[j];
        }
        string res = (check(arr, 0, p - 1, false)) ? "yes\n" : "no\n";
        cout << res;
    }
}