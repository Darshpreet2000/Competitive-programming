#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
        ll n,k,l,end,start;
        cin>>n>>k>>l;
        ll a[n+1];
        end=n;
        start=1;
        bool flag=true;
        if(l>=1){
            l-=1;
           ll tempEndPossible=(n-k)>0?k:n;
           n-=tempEndPossible;

            for(int i=1;i<=tempEndPossible;i++){
                a[i]=i;
                 if(i>1&&a[i]==a[i-1]){
                    l=0;
                    flag=false;
                    break;
                 }

            }
            start=k+1;
        }

        while(l>=1&&n>0){
                ll tempEndPossible=(n-k)>0?k:n;
                 n-=tempEndPossible;
                 tempEndPossible=start+tempEndPossible;
                 int counter=1;
            for(int i=start;i<=tempEndPossible;i++){
                a[i]=counter++;
                if(a[i]==a[i-1]){
                    l=0;
                    flag=false;
                    break;
                }

            }

            start=tempEndPossible;
            l-=1;
        }
        if(n!=0 or flag==false)
            cout<<"-1";
     else
      for(int i=1;i<=end;i++){
        cout<<a[i]<<" ";
      }
      cout<<"\n";
    }
return 0;
}
