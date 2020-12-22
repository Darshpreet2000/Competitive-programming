#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPowerOf2(ll n){
    if(n%2!=0)
        return false;
    return ceil(log2(n))==floor(log2(n));
}
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      vector<ll> v;
      for(ll i=0;i<n;i++){
         v.push_back(i+1);
      }
            //check if number is power of 2
            if(isPowerOf2(n))
                cout<<"-1"<<"\n";
            else{
                 for(auto i=0;i<n;i++){
                    if(isPowerOf2(v[i])){
                       swap(v[i],v[i+1]);
                       i+=1;
                     }
                 }
                 if(n>=3)
                 swap(v[0],v[2]);
              for(int i=0;i<n;i++){
                  cout<<v[i]<<" ";
             }
             cout<<"\n";
        }
    }
return 0;
}
