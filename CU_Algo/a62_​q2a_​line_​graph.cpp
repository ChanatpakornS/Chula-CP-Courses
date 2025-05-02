#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &edge, vector<int> &check, int current, int last) {
    if (check[current] == 1) return 0;
    int ans = 1;
    check[current] = 1;
    for(int i=0;i<edge[current].size();i++){
        //if it's loop
        if(edge[current][i]!=last){
                if(ans!=0) ans=dfs(edge,check,edge[current][i],current);
        }
    }
    if(edge[current].size()>2) return 0;
    return ans;
}

int main() {
    int v, e;
    cin >> v >> e;
    vector<vector<int>> edge(v);
    int tmpx, tmpy;
    while(e--) {
        cin >> tmpx >> tmpy;
        edge[tmpx].push_back(tmpy);
        edge[tmpy].push_back(tmpx);
    }

    vector<int> check(v, 0);
    int final_res = 0;
    for(int i=0;i<v;i++){
        if(check[i]==1) continue;
        else final_res+=dfs(edge,check,i,i);
    }

    cout << final_res;
    return 0;
}