#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void recur(ll n,char src,char helper,char dest){
  //base case
  if(n==0)
    return;
  //recursive case

  recur(n-1,src,dest,helper);

  cout<<"Moved "<<n<<" Disc to "<<dest<<"\n";

  recur(n-1,helper,src,dest);

  return;
}
int main(){

    ll n;
    cin>>n;
    recur(n,'A','B','C');
return 0;
}
