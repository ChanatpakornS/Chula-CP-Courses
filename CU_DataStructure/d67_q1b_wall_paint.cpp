#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,M;
    cin>>n>>M;
    vector<pair<int,pair<int,int>>> v(2*M);
    for(int i=0;i<2*M;i++){
        cin>>v[i].second.second>>v[i].first>>v[i].second.first;
    }
    sort(v.begin(),v.end());
    map<int,int> mp,value;
    mp[v[0].second.second] = v[1].second.second;
    value[v[0].second.second]++;
    int mx = 1 ;
    for(int i=0;i<2*M;i+=2){
        int start = v[i].second.second;
        int stop = v[i+1].second.second;
        auto it = mp.lower_bound(start);
        if(it == mp.end())//start > prev(it)->first
        {
            if(start > prev(it)->second )//start > prev(it)->second
            {
                mp[start] = stop;
                value[start]++;
            }
            continue;
        }
        if(it == mp.begin())//start <= it->first
        {
            if(start != it->first && stop < it->first)
            {
                mp[start] = stop;
                value[start]++;
            }   
            continue;
        }
        auto pre = prev(it);
        if(stop < pre->second && stop < it->first)//start > pre->first
        {
            mp[start] = stop;
            value[start] = value[pre->first];
            value[start]++;
            mx = max(mx,value[start]);
        }
    }
    cout<<mx<<endl;
}