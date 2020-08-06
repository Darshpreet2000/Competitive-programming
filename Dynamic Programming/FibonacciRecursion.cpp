#include<iostream>
using namespace std;
int fib(int n) {
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return fib(n - 1) + fib(n - 2);
}
int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}