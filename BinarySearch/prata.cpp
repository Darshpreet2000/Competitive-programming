#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool can(ll time, vector<ll> cooks_rank, ll no_of_prata){
// can we deliver prata in given time
      int paratas_cooked_till_now=0;
     for(int i=0;i<cooks_rank.size();i++){
        int rank=cooks_rank[i];
        int time_taken=0,n=0;
         while(time_taken<=time){
           if(time_taken<=time)
            n++;
            time_taken= rank*n*(n+1)/2;
             if(time_taken>time)
                n--;
         }

         paratas_cooked_till_now+=n;
         if(paratas_cooked_till_now>=no_of_prata){
            return true;
         }
     }
     return false;
}
int main(){

   ll t;
   cin>>t;
   while(t--){
    ll prata,input,n;
    vector<ll> cooks_rank;
        cin>>prata;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>input;
            cooks_rank.push_back(input);
        }
        sort(cooks_rank.begin(),cooks_rank.end());
        ll beg=1,mid,end=1e7,ans=0;
        while(beg<=end){
            mid=(beg+end)/2;
            if(can(mid,cooks_rank,prata)){
              end=mid-1;
              ans=mid;
            }
            else{
                 beg=mid+1;
            }

        }
    cout<<ans<<"\n";
  }

}
