#include <iostream>
using namespace std;
int cnt1, cnt2;
int fib(int n) {
	if (n == 1 || n == 2) {
		cnt1++;
		return 1;
	}
	else {
		return (fib(n - 1) + fib(n - 2));
	}
}
int f[100] = { 0, };
int fibonacci(int n) {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < n; i++) {
		cnt2++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	fib(N);
	fibonacci(N);
	cout << cnt1 << " " << cnt2;
	return 0;
}