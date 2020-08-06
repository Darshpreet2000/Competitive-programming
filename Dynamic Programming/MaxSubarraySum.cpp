#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
     
    int so_far=0,n,a[100]={0},dp[100]={0};
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];

    }
    so_far=0;
    dp[0]=a[0]<0?0:a[0];
    for(int i=1;i<n;i++){
          dp[i]=dp[i-1]+a[i];
          if(dp[i]<0){
            dp[i]=0;
          }
          
          so_far=max(dp[i],so_far);
    }
cout<<so_far;
  return 0;
}
