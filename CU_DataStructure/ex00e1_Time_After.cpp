#include <iostream>

using namespace std;

int H, M, X;

pair<int,int> setTime(int h, int m, int x) {
    int newH = h + (m + x) / 60; 
    int newM = (m + x) % 60;

    if (newH >= 24 ) newH -= 24;
    
    return {newH, newM};
}

int main() {
    cin >> H >> M >> X;

    pair<int,int> res = setTime(H, M, X);

    if (res.first < 10) cout << "0" << res.first << " ";
    else cout << res.first << " ";

    if (res.second < 10) cout << "0" << res.second << "\n";
    else cout << res.second << "\n";

    return 0;
}

