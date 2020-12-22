   #include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[3002][3002];
ll recur(string s,string t,string e,ll i,ll j){
     if(i==s.length()||j==t.length()){
        return 0;
     }
     if(dp[i][j]!=-1)
        return dp[i][j];
     // take current
     ll ans;
     if(s[i]==t[j])
     ans=1+recur(s,t,e+s[i],i+1,j+1);
     else{
       ans=max(recur(s,t,e,i+1,j),recur(s,t,e,i,j+1));
     }

  return dp[i][j]=ans;
}
void getLCS(string s,string t){
     ll len=dp[s.length()][t.length()];

     ll i=s.length();
     ll j=t.length();
     string e;
     while(i>0&&j>0){
         if(s[i-1]==t[j-1]){
            e.push_back(s[i-1]);
            i--;
            j--;

         }
         else{
            if(dp[i-1][j]>dp[i][j-1])
              i--;
            else j--;
         }
     }
     reverse(e.begin(),e.end());
     cout<<e;
}
int main(){
     string s,t,e;
     cin>>s>>t;
//     recur(s,t,e,0,0);
     for(ll i=0;i<=s.length();i++){
        for(ll j=0;j<=t.length();j++){
                  if (i == 0 || j == 0)
            dp[i][j] = 0;

           else if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
     }

     getLCS(s,t);

return 0;
}
