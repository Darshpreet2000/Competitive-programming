#include<iostream>
using namespace std;
int fib(int n, int a[]) {
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	if (a[n] != 0)
		return a[n];
	return a[n] = fib(n - 1, a) + fib(n - 2, a);
}
int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n, a[1000] = {0};
	cin >> n;
	cout << fib(n, a);
	return 0;
}