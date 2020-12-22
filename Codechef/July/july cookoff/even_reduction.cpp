
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
	int main()
	{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		while(T--)
		{
		bool val=true;
		ll arr[256]={0};

		 ll n;
		 string s;
         cin>>n;
		 cin>>s;
		  if(n%2!=0){
		  	val=false;
		  	cout<<"NO"<<"\n";
		  }	
		  else{
			  	for(ll i=0;i<n;i++){
	               arr[s[i]]++;
			  	}
			  	for(ll i=0;i<n;i++){
	               if(arr[s[i]]%2!=0){
	               	val=false;
	               	cout<<"NO"<<"\n";
	               	break;
	               }
			  	}  	
		  }
         if(val==true)
          cout<<"YES"<<"\n";

		}
		return 0;
	}
