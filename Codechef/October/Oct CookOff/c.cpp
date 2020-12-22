#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<ll>> graph;
vector<ll> value;
void dfs(ll node,ll parent,ll d){
    (d&1)?value[node]=1:value[node]=2;
    for(auto var:graph[node]){
        if(var==parent) continue;
        dfs(var,node,value[node]+1);
    }
}
ll N;
int main(){

    ll T;
    cin>>T;
    while(T--){

            cin>>N;
            // input
            graph.clear();
            graph.resize(N+1);
            value.assign(N+1, 0);

            for(ll i=1;i<N;i++){
                ll u,v;
                cin>>u>>v;
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
            //dfs in
            dfs(1, -1, 1);
            for(int i = 1; i <= N; i ++) {
                cout << value[i] << " ";
            }
    }
return 0;
}
