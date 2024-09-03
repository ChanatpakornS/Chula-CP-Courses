#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

int main() {

    cout << std::fixed << std::setprecision(2);

    int N;
    cin  >> N;

    map<int,pair<int,int>> course;
    map<string, pair<int,int>> teachers;

    while (N--) {
        int cid, score;
        string tname;
        cin >> cid >> tname >> score;
        if(course.find(cid) == course.end()) course[cid] = {0,0};
        if(teachers.find(tname) == teachers.end()) teachers[tname] = {0,0};

        course[cid].first++;
        course[cid].second += score;
        
        teachers[tname].first++;
        teachers[tname].second += score;
    }

    for (auto &i : course) {
        cout << i.first << " " << (i.second.second +0.0) / i.second.first << "\n";
    }
    for (auto &i : teachers) {
        cout << i.first << " " << (i.second.second +0.0) / i.second.first << "\n";
    }

    return 0;
}