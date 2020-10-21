#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Graph{
   public:
     ll v;
     vector<ll>* l;
     Graph(ll v){
       this->v=v;
       l=new vector<ll>[v];
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
 g.print();

  }
return 0;
}
