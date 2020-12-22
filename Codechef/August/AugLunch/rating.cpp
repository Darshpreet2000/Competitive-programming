#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
      int n,m,input;
      cin>>n>>m;
      int initial_rating[n+1]={0},ratings[n+1][m+1],ranking[n+1][m+1],max_rating[n+1]={0},best_rank[n+1]={0};
      for(int i=1;i<=n;i++){
        cin>>initial_rating[i];
      }
      //calculate rating for each month
      for(int i=1;i<=n;i++){
            ratings[i][0]=initial_rating[i];
        for(int j=1;j<=m;j++){
            cin>>input;
            ratings[i][j]=input+ratings[i][j-1];
        }
        int best=-999999,month=-1;
        for(int j=1;j<=m;j++){
             if(ratings[i][j]>best){
               best=ratings[i][j];
               month=j;
             }
        }
        max_rating[i]=month;
      }
     //calculate & assign ranks
     for(int i=1;i<=m;i++){
            vector<pair<int,int>> v;
        for(int j=1;j<=n;j++){

             v.push_back(make_pair(ratings[j][i],j));
        }
    sort(v.rbegin(),v.rend());

      // Now assign ranks
       int curr_rank=1,prev=v[0].first,next_rank=2;
      for(int j=0;j<n;j++){
            if(prev==v[j].first){
               ranking[v[j].second][i]=curr_rank;
                next_rank++;
            }
            else{
                //assign new rank;
                curr_rank=next_rank;
                next_rank++;
                 ranking[v[j].second][i]=curr_rank;
                 prev=v[j].first;
            }
      }
     }


    // find best ranking for each player
    for(int i=1;i<=n;i++){
            int best=100000,month=-1;
        for(int j=1;j<=m;j++){
             if(ranking[i][j]<best){
               best=ranking[i][j];
               month=j;
             }
        }
         best_rank[i]=month;
    }

    int ans=0;
    for(int i=1;i<=n;i++){
       if(max_rating[i]!=best_rank[i]) ans++;
    }

    cout<<ans<<"\n";
  }
}
