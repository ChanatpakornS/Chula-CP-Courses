#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<string, int> freq_keeper;

    int n;
    cin >> n;

    while(n--) {
        string word;
        cin >> word;
        freq_keeper[word]++;
    }

    string maxx_res_string = "";
    int maxx_res_int = 0;
    for (auto &i : freq_keeper) {
        if (maxx_res_int <= i.second) {
            maxx_res_int = i.second;
            maxx_res_string = i.first;
        }
    }

    cout << maxx_res_string << " " << maxx_res_int;

    return 0;
}