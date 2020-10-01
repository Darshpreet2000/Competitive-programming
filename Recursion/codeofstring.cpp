#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char m[] = { ' ','a', 'b', 'c', 'd', 'e', 'f','g','h','i', 'j', 'k',
		 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		 'w', 'x', 'y', 'z' };
vector<string> k;
void comp(char s[],char e[], ll i,ll j){
    if(s[i]=='\0'){
        e[j]='\0';
        k.push_back(e);
        return;
    }

    ll cur=s[i]-'0';

    e[j]=m[cur];
    comp(s,e,i+1,j+1);
    if(s[i+1]!='\0'&&cur<=2){
        ll next=s[i+1]-'0';
        if(next<=6){
                ll num=cur*10+next;
            e[j]=m[num];
            comp(s,e,i+2,j+1);
        }
    }
    return;
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
      char s[100];
      char e[100];
      cin>>s;
      cout<<"[";
      comp(s,e,0,0);
      for(ll i=0;i<k.size();i++){
        cout<<k[i];
        if(i!=k.size()-1)
        cout<<", ";
    }
      cout<<"]";
    }
return 0;
}
