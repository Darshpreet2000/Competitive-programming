#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
bool canReverse(string p){
    ll count=0;
    for(ll i=0;i<p.length();i++){
        if(p[i]=='1')
        count++;
    }
    if(count%2==0) return true;
    return false;

}
void Solve(){

   string s;
   cin>>s;
   vector<set<string>> v(s.length()+1);
   //generate substrings
   for(ll i=0;i<s.length();i++){
       for(ll j=0;j<s.length();j++){
          //take string b/w i to j
         string p;
          for(ll k=i;k<=j;k++)
             p.push_back(s[k]);
             //check before inserting,if its equal to any already inserted

          if(p.length()){
              if(v[p.length()].find(p)!=v[p.length()].end()){
                    //same as inserted
              }
              else{
                  //not same but still need to check
                  bool check=false;
                  string original=p;
                  for(auto var: v[p.length()]){
                      if(canReverse(p)){

                         reverse(p.begin(),p.end());
                      }
                      if(var==original||var==p){
                            check=true;
                            break;
                      }
                      else{
                          p=original;
                          //need to check in detail
                          //the indexes where they differ
                          ll m=0,first=-1,e1=0,e2=0,isCounting=false;
                          while(m<p.length()){
                              if(var[m]!=p[m]&&isCounting==false){
                                    first=m;
                                    isCounting=true;
                              }
                               if(e1==e2&&e1%2==0&&e1>0&&isCounting){
                                  isCounting=false;
                                  //now rev p
                                  reverse(p.begin()+first,p.begin()+m+1);
                             }
                             if(var[m]=='1'&&isCounting==true)
                               e1++;
                              if(p[m]=='1'&&isCounting==true)
                               e2++;
                              m++;
                          }
                          if(var==p){
                            check=true;
                            break;
                         }
                      }
                    p=original;
                  }

                  if(check==false)
                     v[p.length()].insert(p);

              }
          }
       }
   }
   ll ans=0;
   for(auto var:v){
       cout<<var.size()<<"\n";
       ans+=var.size();
   }
   cout<<ans<<"\n";
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


