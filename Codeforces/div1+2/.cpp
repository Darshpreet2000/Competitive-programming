#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
        ll n;
        string s;
        cin>>n;
        cin>>s;
        ll l=0,r=0,d=0;
        ll ans=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='<')
                l++;
            else if(s[i]=='>')
                r++;
        }
        if(l==0||r==0){
            cout<<n<<"\n";
        }
        else{
             ll ans=0;
             for(ll i=0;i<s.length();i++){
                 if(s[i]=='-')
                    ans++;
                 else{
                    if(i>0&&ans>0&&s[i-1]=='-')
                        ans++;
                 }
             }
             if(s[n-1]=='-'&&s[0]!='-')
                ans++;
             cout<<ans<<"\n";
        }
    }
return 0;
}
