
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
	
	using namespace std;
	int main()
	{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
   #endif

		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
	    string s="";
	    cin>>s;
	    int count=0;
	    char prev='a';
	    for(int i=0;s[i]!='\0';i++){
                char cur=s[i];
                 if(prev=='x'&&cur=='y'){
                       count++;
                       prev='a';
                 }
                 else if(prev=='y'&&cur=='x'){
                       count++;
                       prev='a';
                 }
                 else{
                   prev=cur;
                 }
	     }		
	     cout<<count<<"\n";
		}
		return 0;
	}
