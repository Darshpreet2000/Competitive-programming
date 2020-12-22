#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

      ll w,h,n,m;
      cin>>w>>h>>n>>m;
      vector<ll> vert,horiz;
      ll inp;
      for(ll i=0;i<n;i++){

        cin>>inp;
        horiz.push_back(inp);
      }
      for(ll i=0;i<m;i++){
        cin>>inp;
        vert.push_back(inp);
      }

      map<ll,ll> xdiff;
       for(ll i=0;i<horiz.size()-1;i++){
           for(ll j=i+1;j<horiz.size();j++){
           xdiff[abs(horiz[j]-horiz[i])]+=1;
           }
       }

        map<ll,ll> ydiff;
      for(ll i=0;i<vert.size()-1;i++){
               for(ll j=i+1;j<vert.size();j++){
                 ydiff[abs(vert[j]-vert[i])]+=1;
               }
          }
       ll ans=0;
       ll maxcut=0;
       ll counter=0;

      cout<<" X is "<<"\n";
 for(auto i=xdiff.begin();i!=xdiff.end();i++){
           cout<<i->first<<" : "<<i->second<<"\n";
      }
      cout<<" Y is "<<"\n";
          for(auto j=ydiff.begin();j!=ydiff.end();j++){
           cout<<j->first<<" : "<<j->second<<"\n";
               }

       for(auto i=xdiff.begin();i!=xdiff.end();i++){
           for(auto j=ydiff.begin();j!=ydiff.end();j++){
               if(i->first==j->first&&(i->second==j->second==1)){
                counter++;
               }
           }
      }
       if(counter>ans){
        ans=max(counter,ans);
       }
       ll k=0; // line we are placing at y=k
       ll prevCount=ans;
       cout<<"Initially "<<ans<<"\n";
    while(k<=h){
       counter=0;
       ll value=0;
       // check if line already exists
       if(find(vert.begin(),vert.end(),k)==vert.end()){
            // line does not exist
  // now count all the possible squares
          ydiff.clear();
          for(ll i=0;i<vert.size();i++){
                ydiff[abs(vert[i]-k)]+=1;
          }
      value=k;
      counter=prevCount;
         for(auto i=xdiff.begin();i!=xdiff.end();i++){
           for(auto j=ydiff.begin();j!=ydiff.end();j++){
               if(i->first==j->first&&(i->second==j->second==1)){
                counter++;
               }
           }
         }
       if(counter>ans){
        maxcut=value;
        ans=max(counter,ans);
       }

      }
       cout<<" K is "<<k<<" count is "<<counter<<"\n";
      k++;
    }
   cout<<"We place cut at -> "<<maxcut<<"\n";
      cout<<ans<<"\n";
return 0;
}
