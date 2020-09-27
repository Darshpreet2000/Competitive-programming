#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int find(int n){
    if(n<0){
        return 0;
    }
    else if(n==0)
        return 1;

    return find(n-1)+find(n-2)+find(n-3);
}
int main(){

    int n;
    cin>>n;
    cout<<find(n);

return 0;
}
