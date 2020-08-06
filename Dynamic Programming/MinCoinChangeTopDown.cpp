#include<bits/stdc++.h>
using namespace std;
int find(int n, int a[]) {
	if (n == 1 || n == 7 || n == 10)
		return 1;
	if (a[n] != 0)
		return a[n];
	if (n == 0)
		return 0;
	return a[n] = 1 + min(n - 1 >= 0 ? find(n - 1, a) : INT_MAX, min(n - 7 >= 0 ? find(n - 7, a) : INT_MAX, n - 10 >= 0 ? find(n - 10, a) : INT_MAX));
}
int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n, a[100] = {0};
	cin >> n;
	cout << find(n, a);
}