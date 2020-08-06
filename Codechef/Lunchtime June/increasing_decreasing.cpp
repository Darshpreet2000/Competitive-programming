
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
	bool compare(int a,int b) 
{ 
    return (a < b); 
} 
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
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
	         int n,item;
	         vector<int> v,i,d;
	         for(int j=0;j<n;j++){
	         	cin>>item;
	         	v.push_back(item);
	         }
	         unordered_map<int, int> map;
	         for(int j=0;j<v.size();j++){
	         	map[v[j]]++;
	         	if(map[v[j]]==1){
	         		//Store in i
	         		i.push_back(v[j]);
	         	}
	         	else if(map[v[j]]==2){
	                 d.push_back(v[j]);		
	         	}
	         	else{
	         		cout<<"NO";
	         		break;
	         	}
	         }
	         sort(i.begin(),i.end());
	         sort(d.begin(),d.end(),greater<int>());
            cout<<"YES"<<"\n";
            for(int j=0;j<i.size();j++){
            	cout<<i[j]<<" ";
            }
            for(int j=0;j<d.size();j++){
            	cout<<d[j]<<" ";
            }
         cout<<"\n";
		}
		return 0;
	}
