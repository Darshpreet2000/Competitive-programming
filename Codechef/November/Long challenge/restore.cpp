#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
ll primes[10000000]={0};
vector<ll> v;
void sieve(){

   for(ll i=3;i<=10000000;i++){
         if(i%2!=0)
            primes[i]=1;
   }
   primes[1]=1;
   primes[2]=1;
   for(ll i=3;i<=10000000;i++){
         if(primes[i]==1){
            // mark all multiples as not prime
            for(ll j=i*i;j<=10000000;j+=i){
                primes[j]=0;
            }

         }
   }
   for(ll i=2;i<=10000000;i++)
    if(primes[i]==1)
        v.push_back(i);
}
void Solve(){

   ll n;
   cin>>n;
   ll b[n+1]={0};
   for(ll i=1;i<=n;i++)
    cin>>b[i];
   ll a[n+1]={0};
   ll primes_counter=n;
   // pairwise distinct
   for(ll i=n;i>=1;i--){
        if(b[i]>i){
            //we have already assigned
           a[i]=a[b[i]];
        }
        else
         a[i]=v[primes_counter--];
   }
   for(ll i=1;i<=n;i++){

      cout<<a[i]<<" ";
   }
   cout<<"\n";
}
int main(){
    fast
    sieve();
    ll T;
    cin>>T;
    while(T--){
       Solve();
    }
return 0;
}


