#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
#define mod 4294967296
bool dfs(vector<vector<ll>>v,vector<ll> w,ll a,bool visited[],ll x,vector<ll> &c){

    if(x==a){
            c.push_back(x);
        return true;
    }
    // Recur for all the vertices adjacent
    // to this vertex
    for (ll j=0;j<v[x].size();j++){
        if (!visited[v[x][j]]){
            visited[x]=true;
            if(dfs(v,w,a,visited,v[x][j],c)){
                c.push_back(x);
                return true;
            }
        }
    }
    return false;
}

void Solve(){
      ll n,q;
      cin>>n>>q;
      map<ll,ll> v;
      vector<ll> w(n+1);
      for(ll i=1;i<=n;i++)
         cin>>w[i];
      for(ll i=0;i<n-1;i++){
            ll a,b;
            cin>>a>>b;
            v[b]=a;
            //parent of b is a
      }

      while(q--){
        ll a,b;
        cin>>a>>b;
        ll sum=0;
        vector<ll> x,y;
        if(a!=1){
            x.push_back(a);
            while(v[a]!=1){
                x.push_back(v[a]);
                a=v[a];
            }
        }
        x.push_back(1);
        if(b!=1){
            y.push_back(b);

            while(v[b]!=1){
                y.push_back(v[b]);
                b=v[b];
            }
        }
        y.push_back(1);
        for(ll i=0;i<x.size();i++){
            sum=(sum+(w[x[i]]*w[y[i]])%mod)%mod;
        }

         cout<<sum<<"\n";
      }
}

int main(){
    fast
    ll T=1;
    //cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


