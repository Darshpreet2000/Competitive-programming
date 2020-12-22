#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Solve(){

  ll a,b;
  cin>>a>>b;
  string s;
  cin>>s;
  vector<pair<ll,ll>> m;// store beg & end indexes
  bool isfirst=false;
  ll count=0;
  ll beg=0;
  for(ll i=0;i<s.length();i++){
     if(s[i]=='1'&&isfirst==false){
        count++;
        isfirst=true;
        beg=i+1;
     }
     else if(s[i]=='1'){
        count++;
     }
     if(isfirst&&s[i]=='0'){
        m.push_back({beg,i});
        isfirst=false;
        count=0;
     }

  }
  if(isfirst){
        m.push_back({beg,s.length()});
        isfirst=false;
        count=0;
   }
   ll cost=0;
   if(m.size()>1){
       for(ll i=0;i<m.size()-1;i++){
             auto cur=m[i];
             auto next=m[i+1];
             ll diff=abs(cur.second-next.first);
             m[i+1].first=cur.first;
             ll o1=2*a;
             ll o2=b*(diff-1)+a;
             if(cost!=0)
                cost-=a;
             cost+=min(o1,o2);
       }
   }
   else{
    if(m.size()==0){
        cost=0;
    }
    else if(m.size()==1){
        cost+=a;
    }
   }
   cout<<cost<<"\n";
/*
1
6
10001110101010101
*/
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

