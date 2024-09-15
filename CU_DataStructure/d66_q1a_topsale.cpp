#include <iostream>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

void updateLeaderBoard(map<int, int> &itemId, set<pair<int, int>, greater<pair<int, int>>> &sale, int id, int amount)
{
    auto it = sale.find({itemId[id], id});
    if (it != sale.end())
    sale.erase(it);
    itemId[id] += amount;
    itemId.insert({itemId[id], id});
}

void checkNearlyGood(map<int, int> &itemId, set<pair<int, int>, greater<pair<int, int>>> &sale, int amount_checked)
{
    auto it = sale.lower_bound({amount_checked, 0});
    if (it != sale.end()) {
        if(it->first != 0 ) {
            cout << it->second << endl;
        } else {
            cout << "NONEDDDD\n" << endl;
        }
    } else {
        cout << "NONE\n" << endl;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    set<pair<int, int>, greater<pair<int, int>>> leaderBoard;
    map<int, int> itemSale;

    while (N--)
    {
        int id;
        cin >> id;
        leaderBoard.insert({0, id});
        itemSale[id] = 0;
    }

    while (M--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int amount, itemId;
            cin >> itemId >> amount;
            updateLeaderBoard(itemSale, leaderBoard, itemId, amount);
        }
        else if (op == 2)
        {
            int checkAmount;
            cin >> checkAmount;
            checkNearlyGood(itemSale, leaderBoard, checkAmount);
        }
    }

    return 0;
}