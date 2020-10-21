#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    ll dp[100]={0};
    ll count=1;
    for(ll i=1;i<37;i++){
        if(count>4)
            count=1;
        dp[i]=count+dp[i-1];
        count++;
    }
    cout<<"\n";
    ll id[10]={0};
    id[1]=1;
    for(ll i=2;i<=9;i++){
       id[i]=id[i-1]+4;
    }
    cin>>T;
    while(T--){
            string s;
            cin>>s;
            int ch=s[0]-'0';

            ll digits=s.length()-1;
            ll index=id[ch]+digits;
            cout<<dp[index]<<"\n";
    }
return 0;
}
