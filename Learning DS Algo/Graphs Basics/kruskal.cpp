#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class DSU{
    public:
  ll *parent;
  ll *rank;
    DSU(ll n){
       parent=new ll[n];
       rank=new ll[n];
       // parent -1 rank 1
       for(ll i=0;i<n;i++){
        parent[i]=-1;
       }
       for(ll i=0;i<n;i++){
        rank[i]=1;
       }
    }

    ll find(ll i){
        if(parent[i]==-1){
            return i;
        }
        return parent[i]=find(parent[i]);
    }
    void unite(ll x,ll y){
        ll s1=find(x);
        ll s2=find(y);
        if(s1!=s2){
            if(rank[s1]<rank[s2]){
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }
            else{

                parent[s2]=s1;
                rank[s1]+=rank[s2];
            }
        }
    }

};
class Graph{
    public:
      ll n;
      vector<vector<ll>> v;

      Graph(ll n){
         this->n=n;
      }
      void addedge(ll w,ll x,ll y){
          v.push_back({w,x,y});
      }

      ll kruskal_mst(){
          DSU s(v.size());
          sort(v.begin(),v.end());
          //pick an edge if it doesn't form a cycle add it your mst
          ll ans=0;
          for(auto var:v){
            ll w=var[0];
            ll x=var[1];
            ll y=var[2];
            if(s.find(x)!=s.find(y)){
                s.unite(x,y);
                ans+=w;
            }
          }
          cout<<ans<<"\n";
      }
};
int main(){

     Graph g(4);
     g.addedge(0,1,1);
     g.addedge(1,3,3);
     g.addedge(3,2,4);
     g.addedge(2,0,2);
     g.addedge(0,3,2);
     g.addedge(1,2,2);
     g.kruskal_mst();
return 0;
}
