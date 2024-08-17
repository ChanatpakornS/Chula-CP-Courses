#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
    vector<string> res;
    int itx = it - v.begin();
    int bdl = (itx - k > 0) ? itx - k : 0;
    int bdr = (itx + k < v.size() - 1) ? itx + k : v.size() - 1;
    for (int i =0 ; i < v.size(); ++i) {
        if (i < bdl || i > bdr) res.push_back(v[i]);
    }

    return res;

}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}