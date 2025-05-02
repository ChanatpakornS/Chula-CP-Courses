#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <climits>

using namespace std;

int main()
{
    int n; cin >> n;
    unordered_map<int,int> um;

    int m;
    int maxx = INT_MIN;
    int sum = 0;
    
    for (int i=0 ;i < n; ++i) {
        cin >> m;
        if (um.count(m))
            maxx = max(maxx, m + sum - um[m]);
        else 
            um[m] = sum;

        um[m] = min(um[m], sum);
        sum += m;
        maxx = max(m, maxx);
    }

    cout << maxx;

    return 0;
}