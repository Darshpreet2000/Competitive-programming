#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> bellman(ll n,ll src,vector<vector<ll>> z){
   vector<ll> dist(n+1,INT_MAX);
   dist[src]=0;
   for(ll i=0;i<(n-1);i++){
       for(auto var:z){
          ll u,v,w;
          u=var[0];
          v=var[1];
          w=var[2];
          if( dist[u]!=INT_MAX&&(w+dist[u]<dist[v])){
            dist[v]=w+dist[u];

          }
       }
   }
   for(auto var:z){
          ll u,v,w;
          u=var[0];
          v=var[1];
          w=var[2];
          if( dist[u]!=INT_MAX&&(w+dist[u]<dist[v])){
            cout<<"Negative weight cycle present";
            exit(0);

          }
    }
   return dist;
}
int main(){

  //make a graph
  vector<vector<ll>> v;
  ll n,m;
  cin>>n>>m;
  for(ll i=0;i<m;i++){
    ll u,y,w;
    cin>>u>>y>>w;
    v.push_back({u,y,w});
  }
  vector<ll> dist=bellman(n,1,v);
  for(ll i=1;i<=n;i++){
    cout<<i<<" is at distance "<<dist[i]<<"\n";
  }
return 0;
}
