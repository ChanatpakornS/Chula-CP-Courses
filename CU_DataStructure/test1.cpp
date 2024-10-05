#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<string>> v = {
        {"HoshiShong", "Fumi", "Urusei Album"},
        {"Aum No Song", "Fumi", "Urusei Album"},
        {"Baka Song", "CKo", "BiBiAlbum"},
        {"Aoi Song", "CKo", "AiAiAlbum"},
        {"BumBum Song", "Fumi", "Anniversary Album"}};

    sort(v.begin(), v.end(), [](const vector<string> &a, const vector<string> &b)
         {
        if(a[1] == b[1]) {
            if (a[2] == b[2]) {
                return a[0] < b[0];
            } else {
                return a[2] < b[2];
            }
        } else {
            return a[1] < b[1];
        } });

    for (auto &x : v)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}