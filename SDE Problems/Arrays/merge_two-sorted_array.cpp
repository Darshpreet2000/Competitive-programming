#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=0;
        int j=0;
        while(i<m&&j<n){
            if(a[i]<=b[j]){
                i++;
            }
            else{
                swap(a[i],b[j]);
                // now insert b[j] to correct position
                int index=j;
                while(j<n-1&&b[j]>b[j+1]){
                    swap(b[j],b[j+1]);
                    j++;
                }
                j=index;
                i++;
            }
        }
        j=0;
        for(i=m;i<m+n;i++)
            a[i]=b[j++];
    }
void Solve(){
    vector<int> a={1,2,8,0,0,0},b={2,5,6};
    merge(a,3,b,3);
    for(auto var:a)
        cout<<var<<" ";

}
int main(){
    fast
    ll T=1;
  //  cin>>T;
    while(T--){
      Solve();
    }
return 0;
}

