#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
int coun=0;
void merge(int beg,int end,vector<int> &a){

        int mid=(beg+end)/2;
        vector<int> virtua;
        int i=beg;
        int j=mid+1;
        int k=beg;
        while(i<=mid&&j<=end){
            if(a[j]>=a[i]){
                virtua.push_back(a[i++]);
            }
            else{
               coun+=(mid-i+1);
                virtua.push_back(a[j++]);
            }
        }
        while(i<=mid){
             virtua.push_back(a[i++]);
                k++;
        }
        while(j<=end){
             virtua.push_back(a[j++]);
                k++;
        }
        // now copy virtual to original array
       j=beg;
        for(int i=0;i<virtua.size();i++)
            a[j++]=virtua[i];
        return;
    }
    void divide(int beg,int end,vector<int> &nums){
        if(beg>=end){
            return;
        }
        int mid=(beg+end)/2;
        divide(beg,mid,nums);
       divide(mid+1,end,nums);
       merge(beg,end,nums);
        return ;
    }
void Solve(){
   ll n;
   cin>>n;
   vector<int> a;
   for(ll i=0;i<n;i++){
      int np;
      cin>>np;
      a.push_back(np);
   }
   divide(0,n-1,a);
         cout<<coun;
}
int main(){
    fast
    ll T=1;
   // cin>>T;
    while(T--){
      Solve();
    }

return 0;
}


