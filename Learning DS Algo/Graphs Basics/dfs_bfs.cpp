#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Graph{
   public:
     ll v;
     vector<ll>* l;

     bool *visitedA;
     Graph(ll v){
       this->v=v;
       l=new vector<ll>[v];
       visitedA=new bool[v];
     }
     void addEdge(ll x,ll y){
       l[x].push_back(y);
       l[y].push_back(x);
     }
     void print(){
       for(ll i=0;i<v;i++){
          cout<<" Root "<<i<<" -> ";
          for(auto var:l[i]){
            cout<<var<<", ";
          }
          cout<<endl;
       }
     }
     void dfs(ll src){
        cout<<src<<" ";
                    visitedA[src]=true;

        for(auto var:l[src]){
            if(var!=src&&visitedA[var]==false){

            visitedA[var]=true;
            dfs(var);
            }
        }
     }
     queue<ll> q;
     void bfs(ll src){

          bool visited[v];
          q.push(src);
          visited[src]=true;
          while(!q.empty()){
                ll node=q.front();
                cout<<node<<" ";
                q.pop();
              for(auto var:l[node]){
                   if(visited[var]==false){
                    q.push(var);
                    visited[var]=true;
                   }
              }
              cout<<endl;
          }
        return;
     }
};
int main(){

  Graph g(100);
  g.addEdge(1,2);

  g.addEdge(1,3);
  g.addEdge(1,4);
  g.addEdge(3,5);
  g.addEdge(3,6);
  g.addEdge(3,7);
  g.addEdge(3,8);
  g.dfs(1);

return 0;
}
