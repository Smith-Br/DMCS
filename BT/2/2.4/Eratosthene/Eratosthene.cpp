#include <bits/stdc++.h>
using namespace std;

void eratosthene(int n) {
	int j, Prime[n+1];
	for (int i = 0; i <= n; i++) Prime[i] = 0;

	for (int i = 2; i <= round(sqrt(n)); i++) if (Prime[i] == 0) {
		j=i*i;
		while (j <= n) {
			Prime[j] = 1;
			j+=i;
		}
	}

	for (int i = 2; i <= n; i++) if (Prime[i] == 0) cout << i << " ";
}

int main() {
	freopen("Eratosthene.inp", "r", stdin);
	freopen("Eratosthene.out", "w", stdout);

	int n; cin >> n;
	eratosthene(n);

	return 0;
}