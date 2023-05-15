#include <bits/stdc++.h>
using namespace std;

void sieve(int L, int R) {
	bool Prime[R+1]; Prime[0], Prime[1] = 0;
	for (int i = 2; i <= R; i++) Prime[i] = 1;
	for (int i = 2; i <= round(sqrt(R)); i++) {
		if (Prime[i] == 1) {
			int j = i*i;
			while (j <= R) {
				Prime[j] = 0;
				j+=i;
			}
		}
	} for (int i = L; i <= R; i++) if (Prime[i] == 1) cout << i << " ";
}

int main() {
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int L, R; cin >> L >> R;
	sieve(L, R);
	return 0;
}