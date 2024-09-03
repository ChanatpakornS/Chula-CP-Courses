#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void member_multiply(vector<int> &v,
                     vector<pair<vector<int>::iterator, int>> &multiply)
{
    vector<int> temp;
    sort(multiply.begin(), multiply.end());
    if(multiply.size() == 0) {
        return;
    }
    int idx = 0;
    for(int i=0 ; i < v.size() ; ++i) {
        if (idx < multiply.size() && multiply[idx].first == v.begin() + i) {
            for (int j=0 ; j <= multiply[idx].second ; ++j) {
                temp.push_back(v[i]);
            }
            idx++;
            continue;
        } else {
            temp.push_back(v[i]);
        }
    }

    v = temp; 
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator, int>> multiply(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        multiply[i].first = v.begin() + a;
        multiply[i].second = b;
    }
    member_multiply(v, multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}