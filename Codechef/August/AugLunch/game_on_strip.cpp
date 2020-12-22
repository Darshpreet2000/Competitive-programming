
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main(){
			#ifndef ONLINE_JUDGE
		    // for getting input from input.txt
		    freopen("D://Competitive-programming//input.txt", "r", stdin);
		    // for writing output to output.txt
		    freopen("D://Competitive-programming//output.txt", "w", stdout);
		#endif
		
		std::ios::sync_with_stdio(false);
		ll T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{

          ll n,k=0,input;
          cin>>n;
          std::vector<ll> v;
          for(ll i=0;i<n;i++){
          	  cin>>input;
              if(input==0)
              	k++;
              if(input==1&k>0){
                    v.push_back(k);
                     k=0;
              }
          } 
          sort(v.begin(),v.end(),greater<int>());    
         
         if(v.size()==0){
         	cout<<"No";
         }
         else if(v.size()==1){
             if(v[0]&1){
             	cout<<"Yes";
             }
             else {
               cout<<"No";
             }
         }
         else{
             if(v[0]%2==0){
             	cout<<"No";
             }
             else{
                ll num=(v[0]+1)/2;
                if(num<=v[1]){
                	cout<<"No";
                }
                else{
                	cout<<"Yes";
                }
             } 

         }
         cout<<"\n";
      }
		return 0;
	}
