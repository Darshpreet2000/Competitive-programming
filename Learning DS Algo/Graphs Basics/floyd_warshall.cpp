#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

vector<vector<ll>> v;
ll n;
cin>>n;
 for(ll i=0;i<n;i++){
        vector<ll> row;
    for(ll j=0;j<n;j++){
        ll inp;
        cin>>inp;
        row.push_back(inp);
    }
    v.push_back(row);
 }

  for(ll k=0;k<n;k++){
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
        }
    }
  }
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
      cout<<v[i][j]<<" ";
    }
    cout<<"\n";
 }
return 0;
}
