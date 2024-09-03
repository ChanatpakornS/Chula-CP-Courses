#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    cin >> n >> m;
    
    map<int,int> hand;
    while(n--) {
        int pow;
        cin >> pow;
        hand[pow]++;
    }

    int round = 1;
    bool end = false;
    while(!end && m--) {
        int enemy_hand;
        cin >> enemy_hand;
        while(enemy_hand--) {
            int enemy_pow;
            cin >> enemy_pow;
            auto it = hand.upper_bound(enemy_pow);
            if (it == hand.end()) {
                end = true;
                break;
            }
            if (it->second == 1) {
                hand.erase(it);
            } else {
                it->second--;
            }
        }
        if(!end) round++;
    }

    cout << round << '\n';

    return 0;
}