#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool can(long double cooldown_time,vector<ll> v, ll d){

   long double timestamp=0;
   for(int i=0;i<v.size();i++){
        if(timestamp<v[i]){
              timestamp=v[i];
              timestamp+=cooldown_time;
        }
        else if(timestamp>=v[i]&&timestamp<=v[i]+d){
             timestamp+=cooldown_time;
        }
        else{
            return false;
        }
   }

   return true;
}
int main(){
  ll t;
  cin>>t;
  while(t--){

     ll n,d,input;
     vector<ll>v;
     cin>>n>>d;
     for(int i=0;i<n;i++){
            cin>>input;
        v.push_back(input);
     }
     sort(v.begin(),v.end());
     long double beg=0,end=1e18,mid;
     for(int i=0;i<100;i++){
         mid=(beg+end)/2.0;

         if(can(mid,v,d)){
           beg=mid;
        }
        else{
            end=mid;
        }
     }
     cout << fixed << setprecision(10) << beg << '\n';
  }
}
