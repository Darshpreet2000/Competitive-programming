#include<iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n, a[1000] = {0};
	cin >> n;
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < 1000; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	cout << a[n];
	return 0;
}