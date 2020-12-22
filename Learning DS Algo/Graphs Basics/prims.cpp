#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Graph{
   ll n;
   vector<pair<ll,ll>> *v;
   Graph(ll n){
     this->n=n;
     v=new vector<pair<ll,ll>>[n];
   }
   void addEdge(ll x,ll y,ll w){
      v[x].push_back({y,w});
      v[y].push_back({x,w});
   }
   void prims(){
       priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
       bool visited[n]={0};
       q.push({0,0});  //weight,node
       ll ans=0;
       vector<ll> key(n+1, INT_MAX);
        key[0] = 0;
       while(!q.empty()){
           ll weight=q.top().first;
           ll node=q.top().second;
           q.pop();
           if(visited[node])
            continue;
           ans+=weight;
           visited[node]=1;
           for(auto var:v[node]){
              if(visited[var.first]==0 && key[var.first] > var.second){
                     key[var.first] = var.second;
                   q.push({var.second,var.first});
              }
           }
       }
   }
};
int main(){

return 0;
}
