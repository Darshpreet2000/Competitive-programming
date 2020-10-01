#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
void match(string e){
    for(int i=0;i<11;i++){
        if(searchIn[i].find(e)!=-1){
            cout<<searchIn[i]<<"\n";
        }
    }
}
void recur(char a[],string e,int i){
      if(a[i]=='\0'){
            e[i]='\0';
            match(e);
        return;
      }
      ll num=a[i]-'0';
      string s=table[num];
      for(int j=0;j<s.size();j++){
          recur(a,e+s[j],i+1);
      }
    return;
}
int main(){

    ll T=1;

    while(T--){
       char a[100];
       string e;
       cin>>a;
       recur(a,e,0);

    }
return 0;
}
