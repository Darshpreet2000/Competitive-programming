#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Solve(){
   ll primes[100001]={0};

   for(ll i=3;i<=100000;i++){
         if(i%2!=0)
            primes[i]=1;
   }
   primes[1]=1;
   primes[2]=1;
   for(ll i=3;i<=100000;i++){
         if(primes[i]==1){
            // mark all multiples as not prime
            for(ll j=i*i;j<=100000;j+=i){
                primes[j]=0;
            }

         }
   }
   for(ll i=2;i<=100000;i++){
       if(primes[i]==1)
            cout<<i<<" ";
   }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}
