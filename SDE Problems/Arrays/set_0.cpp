#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
 void setZeroes(vector<vector<int>>& a) {
         vector<vector<int>> a;
        int beg=r,end=r;
        int next=beg;
        for(int i=0;i<r;i++){
            vector<int> c;
            for(int j=0;j<=i;j++){
                 if(j==0||j==i){
                     c.push_back(1);
                 }
                else{
                    int val=a[i-1][j-1]+a[i-1][j];
                    c.push_back(val);
                 }
            }
            a.push_back(c);
        }
     return a;
    }
void Solve(){
  vector<vector<int>> a;
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
     vector<int> v;
     for(int j=0;j<m;j++){
            int inp;
     cin>>inp;
        v.push_back(inp);
     }
     a.push_back(v);
  }
  setZeroes(a);
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


