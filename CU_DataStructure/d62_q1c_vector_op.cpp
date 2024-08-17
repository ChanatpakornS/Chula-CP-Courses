#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;

    vector<int> v;

    cin >> n;

    while (n--) {
        string x;
        cin >> x;
        if (x == "pb"){
            int a;
            cin >> a;
            v.push_back(a);
        } else if (x == "sa") {
            sort(v.begin(), v.end());
        } else if (x == "sd") {
            sort(v.begin(), v.end(), greater<int>());
        } else if (x == "r") {
            reverse(v.begin(), v.end());
        } else if (x == "d") {
            int a; 
            cin >> a;
            v.erase(v.begin() + a);
        }
    }

    for(auto &x : v) {
        cout << x << " ";
    }
    return 0;
}