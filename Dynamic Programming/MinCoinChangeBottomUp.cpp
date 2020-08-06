#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n, a[100] = {0};
	cin >> n;
//Bottom Up Approach for 1,7 10
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < 100; i++) {
		a[i] = 1 + min(min(i - 1 >= 0 ? a[i - 1] : INT_MAX, i - 7 >= 0 ? a[i - 7] : INT_MAX), i - 10 >= 0 ? a[i - 10] : INT_MAX);
	}
	cout << a[n];
}