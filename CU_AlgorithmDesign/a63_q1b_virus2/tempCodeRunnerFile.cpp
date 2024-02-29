#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool cv(const vector<int> &vec, int start, int stop)
{
    int m = (start + stop)/2;
    int a = 0, b= 0;
    for (int i=0 ; i <= m ; ++i) {
        if (vec[i]) a++;
    }
    for (int i=m+1; i <= stop ; ++i){
        if (vec[i]) b++;
    }
    if(abs(a - b) <= 1) return cv(vec, start, m) && cv(vec, m+1, stop);
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
        string res = cv(virus, 0, virus.size() - 1) ? "yes" : "no";
        cout << res;
    }
}