#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

       ll n,d;
       cin>>n>>d;
       vector<pair<ll,ll>> v[n+1];
       ll a[n][d];
       for(ll i=0;i<n;i++){
         for(ll j=0;j<d;j++){
            cin>>a[i][j];
         }
       }
       //connect each vertex to every other

      for(ll mask=0;mask<(1<<d);mask++){
                    ll D=0;
                    vector <pair <int, int> > e;
          for(ll i=0;i<n;i++){
                ll sum=0;
                for(ll p=0;p<d;p++){
                        if((mask>>p)&1){
                            sum+=a[i][p];
                        }
                        else
                            sum-=a[i][p];

                   }
                   e.push_back({sum,i});

            }
            int s = min_element(e.begin(), e.end())->second;
            int t = max_element(e.begin(), e.end())->second;
            for (int x = 0; x < n; x++) {
                    ll val=0;
                    for(ll k=0;k<d;k++){
                         val+=abs(a[x][k]-a[s][k]);
                    }
               v[x].push_back({s,-val});

               v[s].push_back({x,-val});
                    val=0;
                    for(ll k=0;k<d;k++){
                         val+=abs(a[x][k]-a[t][k]);
                    }
                    v[x].push_back({t,-val});
               v[t].push_back({x,-val});
            }
       }
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
       cout<<abs(ans)<<"\n";

return 0;
}
