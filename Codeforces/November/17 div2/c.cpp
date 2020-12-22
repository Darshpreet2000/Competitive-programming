#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
  ll n,m;
  vector<vector<ll>> v;
  cin>>n>>m;
  vector<string> a;
  for(ll i=1;i<=n;i++){
      string s;
      cin>>s;
      a.push_back(s);
  }


     for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
         // check top  right
         if(a[i][j]=='1'){
              //top
              bool top,left,right,bottom;
              if(a[i-1][j]=='1')
                top=true;
               if(a[i][j-1]=='1')
                left=true;
                if(a[i-1][j+1]=='1')
                right=true;
                if(a[i+1][j]=='1')
                bottom=true;

             if(top==true&&left==true){
             a[i-1][j]='0';
             a[i][j-1]='0';
              v.push_back({i,j,i-1,j,i,j-1});
            }
               else if(top==true&&right==true){
                a[i-1][j]='0';
                a[i-1][j+1]='0';

              v.push_back({i,j,i-1,j,i-1,j+1});
               }
               else if(left==true&&bottom==true){
             a[i][j-1]='0';

                a[i+1][j]='0';

              v.push_back({i,j,i,j-1,i+1,j});
               }
               else if(right==true&&bottom==true){

                a[i+1][j]='0';
                a[i-1][j+1]='0';

              v.push_back({i,j,i+1,j,i-1,j+1});
               }
               a[i][j]='0';
         }
     }
  }

   cout<<v.size()<<"\n";
   for(ll i=0;i<v.size();i++){
     for(ll j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
     }
     cout<<"\n";
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


