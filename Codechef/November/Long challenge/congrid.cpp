#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
class four{
   public:
   ll a,b,c,d;
   bool f=false;
   four(ll a,ll b,ll c,ll d){
       this->a=a;
       this->b=b;
       this->c=c;
       this->d=d;
    }
};
class three{
   public:
   ll a,b;
   string s;
   three(ll a,ll b,string s){
       this->a=a;
       this->b=b;
       this->s=s;
    }
};
ll n;
vector<string> paths;
ll lp,lq,rp,rq;
bool checkPath(ll x2,ll y2,ll a[501][501],ll i,ll j,string len){
    //cout<<len<<"\n";
      if(i>(n)||i<1||j>(n)||j<1)
       return false;
      if(i==x2&&j==y2){
           if(paths.size()>0){
                if(len.length()>paths[0].length()){
                    paths[0]=len;
                }
            }
            else
            paths.push_back(len);
       return true;

      }
       if(a[i][j]==-1)
            return false;
       // now move
       a[i][j]=-1;
      bool r=checkPath(x2,y2,a,i,j+1,len+'R');
     if(r)
        return true;

      bool d=checkPath(x2,y2,a,i+1,j,len+'D');
     if(d)
        return true;

      bool u=checkPath(x2,y2,a,i-1,j,len+'U');
     if(u)
        return true;

      bool l=checkPath(x2,y2,a,i,j-1,len+'L');

    //found
       if(r||d||u||l){
        return true;
       }
    //not found
       a[i][j]=0;
       return false;
}
void Solve(){
    ll k;
    cin>>n>>k;
    ll a[501][501]={0};
    //select alternate pairs if possible else leave them
    ll x,y,l,r;
    vector<four> v;
    vector<three> o;
    for(ll i=0;i<k;i++){
        ll e,f,g,h;
        cin>>e>>f>>g>>h;
        a[e][f]=-1;
        v.push_back({e,f,g,h});
    }
   // take alternating pairs
   ll count=0;
   for(ll i=0;i<v.size();i++){
        for(ll j=0;j<v.size();j++){
            if(i!=j&&v[i].f==false&&v[j].f==false){
                // check if it is possible in given constraints
                       lp=v[i].c;
                       lq=v[j].c;
                       rp=v[i].d;
                       rq=v[j].d;
                      // find the length
                      ll leng=abs(v[i].a-v[j].a)+abs(v[i].b-v[j].b);
                     if(leng>=max(lp,lq)&&leng<=min(rp,rq)){

                               a[v[j].a][v[j].b]=0;
                               a[v[i].a][v[i].b]=0;
                             //  cout<<" choosing "<<v[i].a<<v[i].b<<v[j].a<<v[j].b<<"\n";
                               bool isPossible=checkPath(v[j].a,v[j].b,a,v[i].a,v[i].b,"");
                              if(isPossible){
                                string len=paths[0];

                                if(len.size()>=max(lp,lq)&&len.size()<=min(rp,rq)){

                                v[i].f=true;
                                v[j].f=true;
                                 o.push_back({i+1,j+1,len});
                                }
                              }
                               paths.clear();
                              a[v[j].a][v[j].b]=-1;
                               a[v[i].a][v[i].b]=-1;

                     }
            }
        }
   }
   cout<<o.size()<<"\n";
   for(ll i=0;i<o.size();i++){
      cout<<o[i].a<<" "<<o[i].b<<" "<<o[i].s<<"\n";
   }
}
int main(){
    fast
    ll T=1;
    //c in>>T;
    while(T--){
      Solve();
    }
return 0;
}
