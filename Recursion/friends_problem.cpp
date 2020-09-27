#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve(int n){
     if(n==0||n==1)
        return 1;

     return solve(n-1)+solve(n-2)*(n-1);
}
int main(){

    int n;
    cin>>n;
    cout<<solve(n);

return 0;
}
