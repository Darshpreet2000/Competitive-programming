#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Graph{
    public:
    unordered_map<string,vector<pair<string,ll>>> m;

    void addEdge(string x,string y,ll w){
           m[x].push_back({y,w});
           m[y].push_back({x,w});
    }
    void print(){
       for(auto var:m){
         cout<<var.first<<" "<<"\n";
       }
    }
    void dijkistra(string src){

          unordered_map<string,ll> dist;
          for(auto j:m){
            dist[j.first]=INT_MAX;
          }
          set<pair<ll,string>> s;

          s.insert({0,src});
          while(!s.empty()){
              auto p=*(s.begin());
               ll distance=p.first;
               string node=p.second;
               s.erase(s.begin());
                // now iterate over all nodes & calculate the distance & insert the,
                for(auto var:m[node]){
                    if(var.second+distance<dist[var.first]){
                        auto f=s.find({dist[var.first],var.first});
                        if(f!=s.end())
                            s.erase(f);
                    dist[var.first]=var.second+distance;
                     s.insert({ dist[var.first],var.first});
                    }
                }

          }
        for(auto d:dist){
            cout<<d.first<<" is located at "<<d.second<<"\n";
        }
    }
};
int main(){

 Graph g;
 g.addEdge("A","D",1);
 g.addEdge("A","J",4);
 g.dijkistra("A");
return 0;
}
