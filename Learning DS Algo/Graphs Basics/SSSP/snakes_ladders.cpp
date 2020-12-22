#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Graph{
   public:
   ll n;
   vector<ll> *v;
   Graph(ll n){
     this->n=n;
     v=new vector<ll>[n];
   }
   void addEdge(ll x,ll y){
     v[x].push_back(y);
   }

   void bfs(ll src){
        vector<ll> visited(n+1,INT_MAX);
        queue<ll> q;
        q.push(src);
        visited[src]=0;
        while(!q.empty()){

            ll node=q.front();
            q.pop();

            cout<<node<<"\n";
            for(auto var:v[node]){
                if(visited[var]==INT_MAX){
                    q.push(var);
                  visited[var]=visited[node]+1;
                }
            }
        }
        for(ll i=0;i<=29;i++){
            cout<<" node is "<<i<<" distance is "<<visited[i]<<"\n";
        }
        cout<<visited[29];
   }
};
int main(){
  Graph g(31);
  int N = 30;
    int moves[N];
    for (int i = 0; i<N; i++)
        moves[i] = -1;

    // Ladders
    moves[2] = 21;
    moves[4] = 7;
    moves[10] = 25;
    moves[19] = 28;

   // Snakes
    moves[26] = 0;
    moves[20] = 8;
    moves[16] = 3;
    moves[18] = 6;

    for(ll i=0;i<30;i++){
        for(ll j=1;j<=6;j++){
            ll pos=i+j;
            if(pos<30){
              if(moves[pos]!=-1)
               pos=moves[pos];
              g.addEdge(i,pos);
            }
        }
    }

  g.bfs(0);

return 0;
}
