// $0 \leq m \leq n \leq 1000$
const int maxn = 1010;
ll C[maxn][maxn];
void CalComb() {
	C[0][0] = 1;
	for (int i = 1; i < maxn; i++) {
		C[i][0] = 1;
		for (int j = 1; j <= i; j++)
			C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
	}
}

// $0 \leq m \leq n \leq 10^5$, 模p为素数
const int maxn = 100010;
ll f[maxn];
void CalFact() {
	f[0] = 1;
	for (int i = 1; i < maxn; i++)
		f[i] = (f[i - 1] * i) % mod;
}
ll C(int n, int m) {
	return f[n] * inv(f[m] * f[n - m] % mod, mod) % mod;
}
