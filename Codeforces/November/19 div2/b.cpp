#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   //number of regular brackets
   string v;
   cin>>v;
   stack<char> s;

   stack<char> r;
   ll count=0;
   for(ll i=0;i<v.length();i++){
       if(v[i]=='('||v[i]==')'){
            if(s.empty()){
                s.push(v[i]);
            }
            else{
                if(v[i]==')'&&s.top()=='('){
                    s.pop();
                    count++;
                }
                else{
                    s.push(v[i]);
                }
            }
       }
       else{
          if(r.empty()){
                r.push(v[i]);
            }
            else{
                if(v[i]==']'&&r.top()=='['){
                    r.pop();
                    count++;
                }
                else{
                    r.push(v[i]);
                }
            }
       }

   }
   cout<<count<<"\n";
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


