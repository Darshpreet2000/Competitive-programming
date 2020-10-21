#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<vector<ll>> b;
void sumcal(ll sum,ll n,vector<ll> v,vector<ll> temp,ll ms,ll i){
    if(sum==ms){
        b.insert(temp);
        return;
    }
    if(i>=n)
        return;
    // either add or not
    //add
    if(v[i]+sum<=ms){
            temp.push_back(v[i]);
        sumcal(sum+v[i],n,v,temp,ms,i+1);
          temp.pop_back();
    }

        sumcal(sum,n,v,temp,ms,i+1);
   return;
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
      ll n;
      cin>>n;
      vector<ll> v,e;
      ll input;
      for(ll i=0;i<n;i++){
        cin>>input;
        v.push_back(input);
      }
      ll sum;
      cin>>sum;
      sort(v.begin(),v.end());
      sumcal(0,n,v,e,sum,0);
      for(auto it:b){
        for(int i=0;i<it.size();i++){
            cout<<it[i]<<" ";
        }
        cout<<"\n";
      }
    }
return 0;
}
