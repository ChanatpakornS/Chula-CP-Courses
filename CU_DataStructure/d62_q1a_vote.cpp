#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int N, K;
    cin >> N >> K;
    
    unordered_map<string,int> vote_keeper;

    while(N--) {
        string in;
        cin >> in;
        if (vote_keeper.find(in) ==  vote_keeper.end()) vote_keeper.emplace(in, 0);
        vote_keeper[in]++;
    }

    vector<pair<int,string>> announce;
    for (auto &i : vote_keeper) {
        announce.push_back({i.second, i.first});
    }

    sort(announce.begin(), announce.end(), greater<pair<int, string>>());

    int ct = 0;
    int last_score;

    for (auto &i : announce) {
        if ((ct >= K && last_score != i.first) || i.first <= 0) break;
        last_score = i.first;
        ct++;
    }

    cout << last_score << "\n";

    return 0;
}