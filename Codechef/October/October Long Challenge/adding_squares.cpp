#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){


    ll T=1;
   // cin>>T;
    while(T--){
      ll w,h,n,m;
      cin>>w>>h>>n>>m;
      vector<ll> vert,horiz;
      ll inp;
      ll smallestVertical=9999999;
      for(ll i=0;i<n;i++){

        cin>>inp;
        horiz.push_back(inp);

      }
      for(ll i=0;i<m;i++){
        cin>>inp;
      if(smallestVertical>inp)
        smallestVertical=inp;
        vert.push_back(inp);
      }
      // hashmap
      map<ll,ll> hm;
      for(ll i=0;i<n-1;i++){
         hm[horiz[i+1]-horiz[i]]+=1;
      }
      ll largest=0;
      ll number;
      for(auto i:hm){
           if(i.second>largest)
            number=i.first;
      }
      ll width=number;
      while(find(vert.begin(),vert.end(),number)!=vert.end()){
        number+=width;
      }
      ll cut=number+smallestVertical;
      vert.push_back(cut);
  // now count all the possible squares
      sort(vert.begin(),vert.end());
      vector<ll> ydiff,xdiff;
      for(ll i=0;i<vert.size()-1;i++){
           for(ll j=i+1;j<vert.size();j++){
            ydiff.push_back(vert[j]-vert[i]);
           }
      }
      for(ll i=0;i<horiz.size()-1;i++){
           for(ll j=i+1;j<horiz.size();j++){
           xdiff.push_back(horiz[j]-horiz[i]);
           }
      }
      ll counter=0;

      for(ll i=0;i<xdiff.size();i++){
           for(ll j=0;j<ydiff.size();j++){
               if(xdiff[i]==ydiff[j]){
                counter++;
                break;
               }
           }
      }
      cout<<counter;
    }
return 0;
}
