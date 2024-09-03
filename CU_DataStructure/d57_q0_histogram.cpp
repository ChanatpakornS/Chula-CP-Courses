#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {

    int N;
    cin >> N;
    unordered_map<string, int> keeper;
    
    while(N--){
        string inp;
        cin >> inp;
        if (keeper.find(inp) == keeper.end()) keeper.emplace(inp, 0);
        keeper[inp]++;
    }

    vector<pair<string, int>> res;
    for(auto &i : keeper) {
        if(i.second > 1) res.push_back({i.first, i.second});
        else continue;
    }

    sort(res.begin(), res.end());
    
    for (auto &i : res) {
        cout << i.first << "  " << i.second << "\n";   
    }

    return 0;
}