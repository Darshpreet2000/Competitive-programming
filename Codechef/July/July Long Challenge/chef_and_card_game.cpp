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
		ll T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n,chef=0,morty=0,a,b,cc=0,mm=0;
			cin>>n;	
			for(ll i=0;i<n;i++){
                cin>>a>>b;
                cc=0;
                mm=0;
                if(a>=10){
                 while(a!=0){
                   ll num=a%10;
                   a=a/10;	
                   cc+=num;
                 }

                }else{
                	cc=a;
                }
                if(b>=10){
                 while(b!=0){
                   ll num=b%10;
                   b=b/10;
                   mm+=num;
                 }
                }
                else{
                	mm=b;
                }
                if(cc>mm){
                	chef+=1;
                }
                else if(mm>cc){
                	morty+=1;
                }
                else{
                chef+=1;
                morty+=1;
                }
               
			}

          if(chef>morty){
          	cout<<0<<" "<<chef;
          }
          else if(morty>chef){
          	cout<<1<<" "<<morty;
          }
          else{
          	cout<<2<<" "<<chef;
          }
          cout<<"\n";
		}
		return 0;
	}
