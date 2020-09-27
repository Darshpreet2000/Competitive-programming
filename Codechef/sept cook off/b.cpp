#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
        ll n,k;
        cin>>n>>k;
        char a[n+1];
        cin>>a;
       vector<ll> zmid,sides;
        bool activator=false,isSide=false;
        ll counter=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'&&activator==false){
                activator=true;
                if(i==0)
                    isSide=true;
                counter++;
            }
            else if(a[i]=='0')
                counter++;
            else if(a[i]=='1'&&activator){
                activator=false;
                if(isSide){
                    sides.push_back(counter);
                    isSide=false;
                }
                else{
                    zmid.push_back(counter);
                }
                counter=0;
            }
        }
        if(counter!=0){
            sides.push_back(counter);
        }
           sort(zmid.begin(),zmid.end(),greater<ll>());

           sort(sides.begin(),sides.end(),greater<ll>());
           ll sidesSum=accumulate(sides.begin(), sides.end(), 0);
           ll zmidSum=accumulate(zmid.begin(), zmid.end(), 0);
           ll totalSum =sidesSum+zmidSum;
           ll gcuts=0;
           int cnt=0;
          if(k==0){
            cout<<totalSum<<"\n";
          }
          else if(totalSum==0){
            cout<<gcuts<<"\n";
           }
           else if(totalSum!=0){

            if(k%2!=0){
              k-=1;
              if(sides.size()>0){
                gcuts+=sides[cnt++];
              }
           }
            int i=0;
             for(i=0;i<zmid.size();i++){
                if(k>2){
                  gcuts+=zmid[i];
                   k-=2;
                }
                else
                    break;
           }
           if(k>=2){
              if(i<zmid.size()){
                    ll sum=accumulate(sides.begin()+cnt,sides.end(),0);
                gcuts+=max(zmid[i],sum);
              }
              else{
               gcuts+=accumulate(sides.begin()+cnt, sides.end(), 0);
              }
           }

            cout<<totalSum-gcuts<<"\n";
        }
    }
return 0;
}
