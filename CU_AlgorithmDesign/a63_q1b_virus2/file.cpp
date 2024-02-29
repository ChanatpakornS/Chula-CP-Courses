#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool cv(const vector<int> &vec, int start, int stop)
{
    if (stop - start == 2) return true;
    int m = (start + stop)/2;
    int a = 0, b= 0;
    for (int i=start ; i < m ; ++i) {
        a += vec[i];
    }
    for (int i=m; i < stop ; ++i){
        b += vec[i];
    }
    if(abs(a - b) <= 1) return cv(vec, start, m) && cv(vec, m, stop);
    return false; 
}

int main()
{
    int n, k;
    cin >> n >> k;
    int p = 1 << k;
    vector<int> virus(p);
    for (int i = 0; i < n; ++i)
    { 
        for (int j = 0; j < p; ++j)
        {
            cin >> virus[j];
        }
        // for (auto &i : virus) cout << i << " ";
        // cout << "\n";
        string res = cv(virus, 0, p) ? "yes\n" : "no\n";
        cout << res;
    }
}