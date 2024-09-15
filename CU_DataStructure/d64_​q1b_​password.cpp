#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,M,L;
    cin >> N >> M >> L;

    vector<int> shift(L);

    for(int i = 0; i < L; i++) {
        cin >> shift[i];
    }

    vector<string> password(N);
    for (int i=0 ; i < N ; ++i) {
        cin >> password[i];
    }

    

    return 0;
}