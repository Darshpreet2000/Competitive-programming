#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
#define mod 1000000007
void Solve(){
    ll n;
    cin>>n;
    ll a[n+1]={0};
    bool isone=false;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            isone=true;
    }
    ll q;
    cin>>q;
    ll r;
    while(q--){
        cin>>r;
        ll chef=0;
        ll turn=0;
        for(ll j=0;j<=(r-1);j++){
                ll i=j%n;
                 turn++;
            if(n==1){
             if(turn==r)
                chef=(chef+a[i])%mod;
             else if(a[i]%2==0)
                    chef=(chef+a[i]-1)%mod;
               else{
                   chef=(chef+a[i])%mod;
               }
            }
          else if(isone==false){
               if(turn==r)
                chef=(chef+a[i])%mod;
              else if(i==n-1){
                 if(a[i]%2==0)
                  chef=(chef+a[i]-1)%mod;
                 else
                  chef=(chef+a[i])%mod;
              }
               else{
                 if(a[i]%2==0)
                  chef=(chef+a[i])%mod;
                 else
                  chef=(chef+a[i]-1)%mod;
               }
           }
           else{
                //one present
                if(a[0]==1){
                        //if this is last turn for second order
                        if(turn==r&&i==0&&turn>1){
                            //do nothing
                        }
                       else if(i==0)
                        chef=(chef+a[i])%mod;
                }
                else if(a[n-1]==1){
                    if(turn==r){
                        chef=(chef+a[i])%mod;
                    }
                    else if(i!=n-1){
                        if(a[i]%2==0)
                            chef=(chef+a[i])%mod;
                        else
                            chef=(chef+a[i]-1)%mod;
                    }
                    else{
                            chef=(chef+a[i])%mod;
                    }
                }
                else{
                     //1 is between
                     if(turn==r)
                        chef+=(a[i])%mod;
                    else if(i!=n-1){
                        if(a[i+1]==1){
                            // if next is my last turn , I will take even
                            if(turn+1==r){
                                if(a[i]%2==0)
                                    chef=(chef+a[i])%mod;
                                else
                                    chef=(chef+a[i]-1)%mod;
                            }
                            //I will take odd now
                             else{
                                if(a[i]%2==0)
                                    chef=(chef+a[i]-1)%mod;
                                else
                                    chef=(chef+a[i])%mod;
                             }
                        }
                        else{

                               if(a[i]%2==0)
                                    chef=(chef+a[i])%mod;
                                else
                                    chef=(chef+a[i]-1)%mod;
                        }
                     }
                    else{
                        // i is n-1
                        //take odd
                        if(a[i]%2==0)
                            chef=(chef+a[i]-1)%mod;
                        else
                            chef=(chef+a[i])%mod;
                    }
                }
           }
        }
        cout<<chef<<"\n";
    }

}
int main(){
    fast
    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}
