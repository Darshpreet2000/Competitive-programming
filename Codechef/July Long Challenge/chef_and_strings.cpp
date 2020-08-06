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

		long long int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
	     long long int n,cur,prev,sum=0,num;
	      vector<long long int> v;
          cin>>n;
          for(int i=0;i<n;i++){
                 cin>>num; 
                v.push_back(num);
          }
          for(int i=0;i<v.size();i++){
                cur=v[i];
                if(i==0)
                 prev=cur;
             else{
              sum=sum+abs(prev-cur)-1;
              prev=cur;
              }    
          }
          cout<<sum<<"\n";
		}
		return 0;
}
