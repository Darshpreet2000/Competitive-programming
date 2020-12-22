#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      ll a[n];
      vector<ll> v;
      ll len=0;
      for(int i=0;i<n;i++){
         cin>>a[i];
         if(i==0||__gcd(a[i],a[i-1])==1){
            v.push_back(1);
            len++;

         }
         else{
            v[len-1]++;
         }
      }
      ll flag=0;
      if(len>1&&__gcd(a[0],a[n-1])>1){
              v[0]+=v.back();
              v.pop_back();
      }
      if(len==1&&__gcd(a[0],a[n-1])>1){
              flag=1;
      }
        vector<ll> b(n+1,0);
      for(ll var:v){
         for(float k=2;k<=var;k++){
             if(flag==1){
                    b[k]+=ceil(var/(k-1));

             }
             else{

                    b[k]+=(ceil(var/(k-1))-1);

             }
         }
      }

     for(ll k=2;k<=n;k++){
        cout<<b[k]<<" ";
     }

    }
return 0;
}
