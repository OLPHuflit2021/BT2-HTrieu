#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)a.second<b.second;
    return a.first<b.first;
}
int main()
{
    int n,max=0;cin>>n;
   vector<pair<int,int>>adj;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        adj.push_back({x,y});
    }
    sort(adj.begin(),adj.end(),cmp);
    int count=0;
    for(auto it:adj){
        if(adj[adj.size()-1].first>=(it.second-it.first)){
            adj[adj.size()-1].first-=(it.second-it.first);
            count++;
        }
        if(adj[adj.size()-1].first<=0)break;
    }
    cout<<adj.size()-count;
    return 0;
}
