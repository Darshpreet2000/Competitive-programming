#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll T;
   cin>>T;
   while(T--){
      ll n,input;
      cin>>n;
      unordered_map<int,int> umap;
      for(ll i=0;i<n;i++){
            cin>>input;
            if(input!=0)
            umap[input]++;
      }
      cout<<umap.size()<<"\n";
   }

return 0;
}
