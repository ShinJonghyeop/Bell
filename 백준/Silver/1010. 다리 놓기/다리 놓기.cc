#include <iostream>
using namespace std;
int combination(int n, int r) {
    if (r > n) return 0; // r이 n보다 크면 조합은 0
    if (r == 0 || n == r) return 1; // 기본 경우: C(n, 0) = C(n, n) = 1

    int res = 1;
    r = min(r, n - r); // C(n, r) == C(n, n - r)로 r을 최적화
    for (int i = 0; i < r; i++) {
        res *= (n - i); 
        res /= (i + 1); 
    }
    return res; 
}
int main() {
	int T,N,M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		cout << combination(M, N) << endl;
	}
	return 0;
}