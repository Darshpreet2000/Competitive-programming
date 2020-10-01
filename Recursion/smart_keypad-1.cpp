#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void recur(char a[],char e[],ll i){
    if(a[i]=='\0'){
            e[i]='\0';
        cout<<e<<"\n";
      return;
    }
    ll num=a[i]-'0';
    string k=table[num];
    for(int j=0;j<k.size();j++){
        char ch=k[j];
        e[i]=ch;
        recur(a,e,i+1);
    }
    return;
}
int main(){

    ll T;
    cin>>T;
    while(T--){
      char a[100],e[100];
      cin>>a;
      recur(a,e,0);
    }
return 0;
}
