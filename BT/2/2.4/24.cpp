#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("24.INP", "r", stdin);
	freopen("24.OUT", "w", stdout);

	int L, R; cin >> L >> R;
	int j; bool Prime[R+1];
	for (int i = 0; i <= R; i++) Prime[i] = 1;

	for (int i = 2; i <= round(sqrt(R)); i++) if (Prime[i] == 1) {
		j = i*i;
		while (j <= R) {
			Prime[j] = 0;
			j+=i;
		}
	}
	for (int i = L; i <= R; i++) if (Prime[i] == 1) cout << i << " ";

	return 0;
}