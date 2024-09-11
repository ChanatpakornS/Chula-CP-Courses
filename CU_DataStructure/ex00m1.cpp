#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int N,M;
    cin >> N >> M;

    int time[N];
    for (int i = 0; i < N; i++) {
        cin >> time[i];
    }

    int time_used = 0;
    while(M) {
        for (auto &time_table : time) {
            if (time_table == 0 || (M > 0 && time_used % time_table == 0)) {
                cout << time_used << "\n";
                M--;
            }
        }
        time_used++;
    }

    return 0;
}