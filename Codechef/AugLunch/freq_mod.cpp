
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
		    freopen("D://Competitive-programming//input.txt", "r", stdin);
		    // for writing output to output.txt
		    freopen("D://Competitive-programming//output.txt", "w", stdout);
		#endif
		
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			
		unordered_map<int, int> modeMap;

		unordered_map<int, int> fMap;
			ll n,input;
			cin>>n;
			for(ll i=0;i<n;i++){
				cin>>input;
				auto it=modeMap.find(input);
                if(it!=modeMap.end())
    			it->second=it->second+1;
    			 else
				modeMap.insert(pair<int,int>(input,1));
			}
            for(auto key:modeMap){
				auto it=fMap.find(key.second);
                if(it!=fMap.end())
    			it->second=it->second+1;
                else  
		        fMap.insert(make_pair(key.second,1));
			} 
			
			ll num=INT_MAX,freq=0;
   			for(auto key:fMap){
		         if(key.second>freq||(key.second==freq&&key.first<num)){
		         	num=key.first;
		         	freq=key.second;
		         }
			} 
			
         cout<<num<<"\n";          
		}
		return 0;
	}
