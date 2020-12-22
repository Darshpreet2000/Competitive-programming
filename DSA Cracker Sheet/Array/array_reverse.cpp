#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
string reverseWord(string str){

    for(int i=0;i<str.length()/2;i++)
      swap(str[i],str[str.length()-i-1]);

      return str;
}
  //Your code here

void recur(string &a,ll beg,ll end){
      //base case
       if(beg>end)
        return;
        swap(a[beg],a[end]);
       recur(a,beg+1,end-1);
}
void Solve(){
    string s,a;
    cin>>s;
   // cout<<reverseWord(s);
   recur(s,0,s.length()-1);
    cout<<s<<"\n";
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


